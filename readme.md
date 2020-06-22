# 自分用競プロツール(つくりかけ)

- atcoder-tools は神なのでそれをつかおう
- ps1 で長く使いながら機能追加してったらやりすぎてクソコードになったので最低限以外消す + python でリファクタリング
- 自分の環境で動けばヨシ！

## 以下、めも

- コンテスト中に Visual Studio を使い、ソースファイルを 1 個だけ使いまわす
- コンテスト(/ばちゃ)前に準備して、コンテスト/(ばちゃ)中に短いコマンドで操作できるようにする
- cmd のエイリアス的なので`ac.py submit x`みたいのを`sub x`だけで書けるようにする: \\
macros.txt
```
sub = python ac/ac.py submit $*
cp = python ac/ac.py copy $*
clr = python ac/ac.py clear $*
mksnip = python ac/ac.py make-snippet $*
```
とかして VS 内ターミナルを`cmd /K DOSKEY /MACROFILE=macros.txt`とかにする
- ↓の「整形して」の意味:
	+ `//sub-BOF`から`//sub-EOF`までのコードを評価する
	+ 長いテンプレートの上部に solve() 近辺を書き、submission 画面でスクロールせずに済むようにする
	+ ↑ではライブラリを貼った部分は省略し、ライブラリ名だけ表示する

## 仕様 予定

### 残す機能

- コンテスト(/ばちゃ)前:
	+ `start`: コンテスト(/ばちゃ)開始と同時に、用意されたコンテスト(/ばちゃ)情報にある問題のテストケースをダウンロードする
- コンテスト(/ばちゃ)中:
	+ `sub x`: 整形して、問題 x のサンプルチェックをして、AC なら提出 オプション:
		* `-c`: ステータスにかかわらず、yn で提出するか選択(答えが複数ある問題など)
		* `-f`: コンパイルせずに提出(abc_a など)(最近使ってないけど)(WA でるので)
	+ `cp`: 整形して、クリップボードにコピー(atcoder 以外のコンテストサイトなどで)
	+ `clr`: 全部消しテンプレートを貼る
- コンテスト(/ばちゃ)以外
	+ `mksnip`: [ライブラリ](https://tqkoh.github.io/library/)からソースコードを持ってきてスニペット化する (タイトル)[tab] と入力するとライブラリの中身が貼られるようにする(#include で埋め込まれるやつのほうがかっこいいが、ライブラリの中身をその場でいじりたいため)

### 対応するサイト

- AtCoder
	+ ばちゃ AtCoder Problems
	+ ばちゃ AVC
- CodeForces(追加)(できたら)
