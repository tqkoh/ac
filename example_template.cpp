#define _ENV_TQK_

//sub-BOF

// author: Tqk
// pc: desktop
// template version: D20220402

// #define _AOJ_
// #define _ATCODER_
#define _C_INPUT_

#pragma region template

#pragma region basic
#define IN_FILE "./in.txt"
//#pragma GCC optimize ("O3")
#pragma warning(disable: 4455 4244 4067 4068 4996)
#define _CRT_SECURE_NO_WARNINGS
#pragma GCC target ("avx")
#pragma GCC diagnostic ignored "-Wliteral-suffix"
#define NOMINMAX
#ifdef _ENV_TQK_
#include <Windows.h>
#endif
#include "bits/stdc++.h"
using namespace std;
#ifndef _AOJ_
#ifdef _ATCODER_
#include <atcoder/all>
#endif
#endif
#define ac atcoder
using lint = int64_t;
using ll = int64_t;
using ld = long double;
using cs = string;
using vl = vector<ll>;
#define _getname1(_0, name, ...) name
#define _getname2(_0, _1, name, ...) name
#define _getname3(_0, _1, _2, name, ...) name
#define _getname4(_0, _1, _2, _3, name, ...) name
#define _tgetname1(ex) _getname1 ex
#define _tgetname2(ex) _getname2 ex
#define _tgetname3(ex) _getname3 ex
#define _tgetname4(ex) _getname4 ex
#define _vec2(ty, h, ...) h, vector<ty>(__VA_ARGS__)
#define _vec3(ty, x, y, ...) x, vector(y, vector<ty>(__VA_ARGS__))
#define _vec4(ty, x, y, z, ...) x, vector(y, vector(z, vector<ty>(__VA_ARGS__)))
#define _vec5(ty, x, y, z, t, ...) x, vector(y, vector(z, vector(t, vector<ty>(__VA_ARGS__))))
#define _tvec2(ex) _vec2 ex
#define _tvec3(ex) _vec3 ex
#define _tvec4(ex) _vec4 ex
#define _tvec5(ex) _vec5 ex
#define vec(d, ...) _tvec##d((__VA_ARGS__))
#define ve(ty) vector<ty>
#define linf 1152921504606846976
#ifndef _AOJ_
inline ll operator""z(const unsigned long long n){ return ll(n); }
#endif
#pragma endregion

#pragma region rep
#define _rep1(n) for(ll i=0;i<n;++i)
#define _rep2(i,n) for(ll i=0;i<n;++i)
#define _rep3(i,a,b) for(ll i=a;i<b;++i)
#define _rep4(i,a,b,c) for(ll i=a;i<b;i+=c)
#define _trep2(ex) _rep2 ex
#define _trep3(ex) _rep3 ex
#define _trep4(ex) _rep4 ex
#define rep(...) _tgetname4((__VA_ARGS__,_trep4,_trep3,_trep2,_rep1))((__VA_ARGS__))
#define _per1(n) for(ll i=n-1;i>=0;--i)
#define _per2(i,n) for(ll i=n-1;i>=0;--i)
#define _per3(i,a,b) for(ll i=b-1;i>=a;--i)
#define _per4(i,a,b,c) for(ll i=a+(b-a-1)/c*c;i>=a;i-=c)
#define _tper2(ex) _per2 ex
#define _tper3(ex) _per3 ex
#define _tper4(ex) _per4 ex
#define per(...) _tgetname4((__VA_ARGS__,_tper4,_tper3,_tper2,_per1))((__VA_ARGS__))
#define _all1(v) v.begin(),v.end()
#define _all2(v,a) v.begin(),v.begin()+a
#define _all3(v,a,b) v.begin()+a,v.begin+b
#define _tall2(ex) _all2 ex
#define _tall3(ex) _all3 ex
#define all(...) _tgetname3((__VA_ARGS__,_tall3,_tall2,_all1))((__VA_ARGS__))
#define _each1(c) for(auto &e:c)
#define _each2(e, c) for(auto &e:c)
#define _teach2(ex) _each2 ex
#define each(...) _tgetname2((__VA_ARGS__,_teach2,_each1))((__VA_ARGS__))
#pragma endregion

#pragma region io
template<class T> istream& operator>>(istream& is, vector<T>& vec){ for(T& x: vec) is>>x; return is; }
template<class T, class U> istream& operator>>(istream& is, pair<T, U>& p){ is>>p.first; is>>p.second; return is; }
template<class T> ostream& operator<<(ostream& os, vector<T>& vec){ if(vec.size())os<<vec[0]; rep(i, 1, vec.size())os<<' '<<vec[i]; return os; }
template<class T, class U> ostream& operator<<(ostream& os, pair<T, U>& p){ os<<p.first<<" "<<p.second; return os; }
template<class T> ostream& operator<<(ostream& os, set<T>& s){ each(s)os<<e<<" "; return os; }

#ifdef _ENV_TQK_
/*
ifstream infile(IN_FILE);
template<class T>
ifstream& operator>>(ifstream& is,vector<T>& vec);
template<class T,size_t size>
ifstream& operator>>(ifstream& is,array<T,size>& vec);
template<class T,class L>
ifstream& operator>>(ifstream& is,pair<T,L>& p);
template<class T>
ifstream& operator>>(ifstream& is,vector<T>& vec){ for(T& x: vec) is>>x;return is; }
template<class T,class L>
ifstream& operator>>(ifstream& is,pair<T,L>& p){ is>>p.first;is>>p.second;return is; }
inline void fin(){}
template <class Head,class... Tail>
inline void fin(Head&& head,Tail&&... tail){ infile>>head;fin(move(tail)...); }
*/
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
inline void in(){ SetConsoleTextAttribute(hConsole,10); }
template <class Head,class... Tail>
inline void in(Head&& head,Tail&&... tail){
	SetConsoleTextAttribute(hConsole,15);
	cin>>head;in(move(tail)...);
}
#else
inline void in(){}
template <class Head,class... Tail>
inline void in(Head&& head,Tail&&... tail){ cin>>head;in(move(tail)...); }
#endif

inline bool out(){ return(cout<<'\n',0); }
template <class T>
inline bool out(T t){ return(cout<<t<<'\n',0); }
template <class Head,class... Tail>
inline bool out(Head head,Tail... tail){ cout<<head<<' ';out(move(tail)...);return 0; }
#define o(p) cout<<(p)<<endl, 0
#define sp(p) cout<<(p)<<" ", 0
#define no(p) cout<<(p), 0
#ifdef _ENV_TQK_
inline bool deb(){ SetConsoleTextAttribute(hConsole,10); return(cout<<'\n',0); }
template <class T>
inline bool deb(T t){ return(SetConsoleTextAttribute(hConsole,12),cout<<t<<'\n',SetConsoleTextAttribute(hConsole,10),0); }
template <class Head,class... Tail>
inline bool deb(Head head,Tail... tail){
	SetConsoleTextAttribute(hConsole,12);
	cout<<head<<' ';deb(move(tail)...);return 0;
}
#define dsp(ex) SetConsoleTextAttribute(hConsole,12), sp(ex)
#define dno(ex) SetConsoleTextAttribute(hConsole,12), no(ex)
#define look(v) SetConsoleTextAttribute(hConsole,12),cout<<#v<<": ",deb(v);
#else
#define deb(...) 0
#define dsp(ex) 0
#define dno(ex) 0
#define look(v) 0
#endif

#pragma endregion

#pragma region TA
#define lin(...) ll __VA_ARGS__;in(__VA_ARGS__)
#define stin(...) string __VA_ARGS__;in(__VA_ARGS__)
#define vin(type,name,size) vector<type> name(size);in(name)
#define pb push_back
#define fi e.first
#define se e.second
#define YES(c) cout<<((c)?"YES\n":"NO\n"),0
#define Yes(c) cout<<((c)?"Yes\n":"No\n"),0
#define POSSIBLE(c) cout<<((c)?"POSSIBLE\n":"IMPOSSIBLE\n"),0
#define Possible(c) cout<<((c)?"Possible\n":"Impossible\n"),0
#define st(v) sort(all(v))
#define psort(l,r) if(l>r)swap(l,r);
#define fn(ty1,ty2,ex) [&](ty1 l,ty2 r){ return(ex); }
#define lfn(ex) [&](ll l,ll r){ return(ex); }

#pragma endregion

#pragma region func
vector<ll> iota(ll n, ll x = 0){
	vector<ll>ret(n);
	iota(all(ret), x);
	return ret;
}
inline constexpr ll gcd(ll a,ll b){ while(b){ ll c=b;b=a%b;a=c; }return a; }
inline constexpr ll lcm(ll a,ll b){ return a/gcd(a,b)*b; }
template<typename T>
inline constexpr bool chmin(T &mn,const T &cnt){ if(mn>cnt){ mn=cnt;return 1; } else return 0; }
template<typename T>
inline constexpr bool chmax(T &mx,const T &cnt){ if(mx<cnt){ mx=cnt;return 1; } else return 0; }
template <class F>
inline void srt(F f){  }
template <class F, class Head, class... Tail>
inline void srt(F f, Head&& head, Tail&&... tail){
	vector<int>a(head.size());
	iota(all(a), 0);
	sort(all(a), f);
	auto res = head;
	rep(head.size())res[i] = head[a[i]];
	head = res;
	srt(f, move(tail)...);
}
template <class T>
auto smaller(vector<T>&a){
	return [&](int i,int j){return a[i]<a[j];};
}
template <class T>
auto larger(vector<T>&a){
	return [&](int i,int j){return a[i]>a[j];};
}
template<class T> void operator--(vector<T>& vec){ for(T& x: vec) --x; }
inline void i0(){  }
template<class Head, class... Tail>
inline void i0(Head&& head,Tail&&... tail){
	--head;
	i0(move(tail)...);
}
#pragma endregion

#pragma region P

class P{
public:
	ll f, s;
	P():f(0), s(0){};
	P(ll a, ll b):f(a), s(b){};
};
istream& operator>>(istream& os, P& p){ os>>p.f>>p.s; return os; }
inline constexpr bool operator<(const P& l, const P& r){ return(l.f-r.f?l.f<r.f:l.s<r.s); }
inline constexpr bool operator>(const P& l, const P& r){ return(l.f-r.f?l.f>r.f:l.s>r.s); }
inline constexpr bool operator==(const P& l, const P& r){ return(l.f==r.f&&l.s==r.s); }
inline constexpr bool operator!=(const P& l, const P& r){ return(l.f!=r.f||l.s!=r.s); }
inline P operator+(const P& l, const P& r){ return P(l.f+r.f, l.s+r.s); }
inline P operator-(const P& l, const P& r){ return P(l.f-r.f, l.s-r.s); }
inline P operator-(const P& r){ return P(-r.f, -r.s); }
inline P operator*(const ll& l, const P& r){ return P(l*r.f, l*r.s); }
inline P operator/(const P& l, const ll& r){ return P(l.f/r, l.s/r); }
inline ld abs(P p){ return sqrtl(p.f*p.f+p.s*p.s); }
inline ll mabs(P p){ return abs(p.f)+abs(p.s); }
inline ll mht(P x, P y){ return mabs(x-y); }

#pragma endregion

#pragma region start
struct Start{
	Start(){
#ifndef _C_INPUT_
		cin.tie(0),cout.tie(0);
		ios::sync_with_stdio(0);
#endif
		cout<<fixed<<setprecision(16);
	}
} __start;
#pragma endregion

#pragma endregion

#pragma region const
{% if mod %}
#define mod {{mod}}
{% else %}
#define mod 998244353
{% endif %}
const ld pi=acosl(-1);
const ld tau=(1.+sqrtl(5))/2.;
P d4[4]={P(1,0),P(0,1),P(-1,0),P(0,-1)};
P d8[8]={P(1,0),P(1,1),P(0,1),P(-1,1),P(-1,0),P(-1,-1),P(0,-1),P(1,-1)};
{% if yes_str %}
const cs AUTO_YES = "{{yes_str}}";
{% else %}
const cs AUTO_YES = "Yes";
{% endif %}
{% if no_str %}
const cs AUTO_NO = "{{no_str}}";
{% else %}
const cs AUTO_NO = "No";
{% endif %}
int cho(bool c,cs yes=AUTO_YES,cs no=AUTO_NO){
	return out((c?yes:no));
}
#pragma endregion

{% if mod %}
// automod: {{ mod }}

{% endif %}
{% if yes_str %}
// autoyn: {{ yes_str }}, {{ no_str }} cho(c) to use

{% endif %}
{% if prediction_success %}
{% else %}
// prediction failed

{% endif %}
#pragma region solve

{% if prediction_success %}
int solve({{ formal_arguments }}){
	
	return 0;
}
{% else %}
int solve(){

	return 0;
}
{% endif %}

#pragma endregion

#pragma region main

int main(){
{% if prediction_success %}
{{input_part}}{{test_generate}}
{% else %}
	solve();
{% endif %}
	return 0;
}

#pragma endregion

//sub-EOF
