#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int nc = N;
  int k = 1;
  while (nc >= pow(26, k)) {
    nc -= pow(26, k);
    k++;
  }

  string ans = "";
  for (int i = 1; i <= k; i++) {
    cout << "loop" << endl;
    if (i == k) {
      cout << "equal" << endl;
      char c = N + 96;
      cout << c << endl;
      ans = ans + c;
    } else {
      int t = N % 26;
      cout << t << endl;
      char c = t + 96;
      cout << c << endl;
      ans = ans + c;
      N -= pow(26, i);
    }
  }

  cout << ans << endl;

  return 0;
}
