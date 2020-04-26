#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  if (S.size() < 4) {
    cout << 0 << endl;
    return 0;
  }

  int pair = 0;
  for (int i = 0; i < S.size(); i++) {
    for (int j = 4; j <= 6; j++) {
      if (i + j > S.size()) continue;

      int t = atoi(S.substr(i, j).c_str());
      if (t % 2019 == 0) {
        pair++;
      }
    }
  }

  cout << pair << endl;

  return 0;
}