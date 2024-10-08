# About this project
標準Cライブラリの約30の関数を再実装し、またユーティリティ関数を実装しました。  
これによって基本的なプログラミング概念、メモリ管理、データ操作に対する理解を深めました。  

# Example
<img width="392" alt="Screenshot 2024-09-11 at 22 37 10" src="https://github.com/user-attachments/assets/360a5e52-8d5a-440a-9786-0dfe0f1f8d6a">

main.cファイルで標準のatoiやbzeroと挙動の違いを検証することができます。

# 機能
利用可能な関数の一覧はincludeファイルを参照してください。  

標準Cライブラリ関数: memcpy, substr, memcmpなど標準Cライブラリの重要な関数  
ユーティリティ関数: 機能を拡張するユーティリティ関数で、サブストリングの作成、文字列の結合、リスト操作などを行う関数

# Build
以下のコマンドで静的ライブラリが作成されます。静的ライブラリを使用する場合はUsageへ進んでください。  
```
make ex
```

挙動を簡単に試したい場合は、以下のコマンドで実行ファイルを作成できます。  
```
make exec
```
実行ファイルを実行すると、出力が得られます。  
```
./a.out
```
残念ながら、全ての関数をテストするmain.cは作成していません。（公開に向けての時間がありませんでした）  
main.cを変更して、他の出力を試すこともできます。  

# Usage
ソースファイルでヘッダーファイルをインクルードしてください。
```
#include "includes/libft.h"
#include "includes/libft_utils.h"

int main()
{ ...}
```
静的ライブラリをソースファイルとともにコンパイルしてください。
```
cc -L. -lft main.c -o a.out
```

# Learning
基本的なC構文、データ型、制御構造を学びました。  
印象的だったのは、ライブラリの中でも低レベルな関数と、それを利用すると簡単に実装できる関数という構図になっており、再利用可能な関数の重要性を学ぶことができました。

## Other topics
- メモリ管理: 動的メモリの割り当てと管理、メモリリークの防止
- データ構造: リンクリストや配列などの基本的なデータ構造
- アルゴリズム的思考: 文字列操作、データ変換、数値計算などのアルゴリズム
