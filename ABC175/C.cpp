#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  long long x, k, d;
  cin >> x >> k >> d;

  long long cur = abs(x);
  long long rem = k;
  long long cnt = min(cur / d, k);

  cur -= d * cnt;
  rem -= cnt;

  if (rem > 0) {
    if (rem % 2 == 1) {
      cur = cur - d;
    }
  }

  cout << abs(cur) << endl;

  return 0;
}