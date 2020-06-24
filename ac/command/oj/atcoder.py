﻿# coding: utf-8

import requests
import re
import urllib
import os
import sys
import lxml.html

class AtCoder:
	LOGIN_URL = 'https://atcoder.jp/login'

	def __init__(self):
		self.get_session()
		return

	def get_session(self):
		self.session = requests.Session()
		response = self.session.get(self.LOGIN_URL)
		tree = lxml.html.fromstring(response.text)
		self.csrf_token = tree.xpath('//*[@name="csrf_token"]/@value')[0]
		payload = {
			'username':os.environ.get('ac_id'),
			'password':os.environ.get('ac_password'),
			'csrf_token':self.csrf_token
		}
		self.session.post(self.LOGIN_URL, data=payload)
		return

	def get_problems(self, contest_id):
		res = self.session.get(f'https://atcoder.jp/contests/{contest_id}/submit')
		tree = lxml.html.fromstring(res.text)
		problems = tree.xpath('//*[@id="select-task"]/option/@value')
		return problems
	
	def download_testcases(self, problem):
		path = f'data/testcase/atcoder/{problem[1]}/'
		if os.path.exists(path):
			return -1
		os.makedirs(path)

		res = self.session.get(f'https://atcoder.jp/contests/{problem[1]}/tasks/{problem[2]}?lang=ja')
		tree = lxml.html.fromstring(res.text)

		cnt = 0
		while len(tree.xpath(f'//h3[text()="入力例 {cnt+1}"]')):
			cnt += 1

			input_data = tree.xpath(f'//h3[text()="入力例 {cnt}"]')[0].getnext().text
			output_data = tree.xpath(f'//h3[text()="出力例 {cnt}"]')[0].getnext().text

			with open(path+f'{problem[2]}_{cnt}.input', mode='w') as f:
				for line in input_data:
					f.write(line)
			with open(path+f'{problem[2]}_{cnt}.output', mode='w') as f:
				for line in output_data:
					f.write(line)

		return cnt
	
	def submit(self, problem, language_id, submit_source):
		payload = {
			'data.TaskScreename':problem[2],
			'data.LanguageId':language_id,
			'sourceCode':submit_source,
			'csrf_token':self.csrf_token
		}
		self.session.post(f'https://atcoder.jp/contests/{contest_id}/submit', data=payload)
		return

	def dev(self,problem):
		print(self.download_testcases(problem))

