#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  ll N, K;
  cin >> N >> K;

  ll ans = min(abs(N - (N / K * K)), abs(N - ((N / K + 1) * K)));

  cout << ans << endl;

  return 0;
}