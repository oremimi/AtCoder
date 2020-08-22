#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;

  int ans = 0;
  if (S.find("SSS") < string::npos) {
    ans = 3;
  } else if (S.find("SS") < string::npos) {
    ans = 2;
  } else if (S.find("S") < string::npos) {
    ans = 1;
  } else {
    ans = 0;
  }

  cout << ans << endl;

  return 0;
}
