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
## string
#### 検索
```c++
string s = "ABC";
if(s.find("AB") < string::npos) {
  cout << "AB" <<endl;
}
```
#### 切り出し
```c++
string s = "ABC";
s.substr(n,m)
```
n番目以降をm文字切り出す
## vector
#### 宣言
```c++
vector<int> vec(N);//Nは要素数
```
#### ソート
```c++
sort(vec.begin(), vec.end());
```
#### イテレーター取得
```c++
auto result = std::find(v.begin(), v.end(), 1);
```
## map
#### 宣言
```c++
map<string, int> data;
```
#### 追加
```c++
data[key]++;
```
#### for
```c++
for (auto elm : poll) {
    
}
```

#### 最大要素探し
```c++
auto maxPair = max_element(
      data.begin(), data.end(),
      [](const pair<string, int>& a, const pair<string, int>& b) -> bool {
        return a.second < b.second;
      });

```
# 数学関連
### 三角形の成立条件
 - 二辺の合計が残りの辺より大きい
```
a + b > c
b + c > a
c + a > b
```
### 余弦定理
```
a2 = b2 + c2 − 2bc*cos∠A
```