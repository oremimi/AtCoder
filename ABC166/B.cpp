#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  bool sunuke[N];
  for (int i = 0; i < N; i++) {
    sunuke[i] = true;
  }

  int d;
  for (int i = 0; i < K; i++) {
    cin >> d;
    for (int j = 0; j < d; j++) {
      int t;
      cin >> t;
      sunuke[t - 1] = false;
    }
  }

  int ans = 0;
  for (int i = 0; i < N; i++) {
    if (sunuke[i] == true) ans++;
  }

  cout << ans << endl;

  return 0;
}
