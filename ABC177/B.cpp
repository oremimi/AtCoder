#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S, T;
  cin >> S >> T;

  int maxT = 0;
  for (int i = 0; i <= S.size() - T.size(); i++) {
    int tmp = 0;
    for (int j = 0; j < T.size(); j++) {
      if (S[i + j] == T[j]) {
        tmp++;
      }
    }
    maxT = max(maxT, tmp);
  }

  cout << T.size() - maxT << endl;

  return 0;
}