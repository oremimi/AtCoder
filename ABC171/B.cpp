#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> p;
  rep(i, N) {
    int t;
    cin >> t;
    p.push_back(t);
  }

  sort(p.begin(), p.end());

  int ans = 0;
  rep(i, K) ans += p[i];

  cout << ans << endl;

  return 0;
}
