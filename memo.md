# テンプレ
```c++
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {

  return 0;
}
```

# 言語関連
## int
#### 範囲
 - 2147483647 〜 -2147483648 (10の10乘) → あふれる時は"long long"を使う
#### 絶対値取得
```c++
abs(x);
```
#### 切り上げ除算
```c++
(a + (b - 1)) / b
```
## 文字列操作
#### 検索
```c++
string s = "ABC";
if(s.find("AB") < string::npos) {
  cout << "AB" <<endl;
}
```
## vector
#### 宣言
```c++
vector<int> vec(N);//Nは要素数
```
#### ソート
```c++
sort(vec.begin(), vec.end());
```

# 数学関連
### 三角形の成立条件
 - 二辺の合計が残りの辺より大きい
```
a + b > c
b + c > a
c + a > b
```