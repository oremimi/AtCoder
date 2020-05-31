#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  int H[N];
  bool gh[N];
  for (int i = 0; i < N; i++) {
    cin >> H[i];
    gh[i] = true;
  }

  for (int i = 0; i < M; i++) {
    int t, t2;
    cin >> t >> t2;
    t--;
    t2--;
    if (H[t] > H[t2]) {
      gh[t2] = false;
    } else if (H[t2] > H[t]) {
      gh[t] = false;
    } else {
      gh[t] = false;
      gh[t2] = false;
    }
  }

  int ans = 0;
  for (int i = 0; i < N; i++) {
    if (gh[i] == true) ans++;
  }

  cout << ans << endl;

  return 0;
}
