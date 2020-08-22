#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  ll N;
  cin >> N;
  vector<ll> A(N);
  rep(i, N) cin >> A[i];

  ll t = A[0], sum = 0;
  for (ll i = 1; i < N; i++) {
    if (A[i] > t) {
      t = A[i];
    } else {
      sum += t - A[i];
    }
  }

  cout << sum << endl;

  return 0;
}