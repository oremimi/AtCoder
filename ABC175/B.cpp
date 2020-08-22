#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  vector<int> vec(N);
  rep(i, N) cin >> vec[i];
  sort(vec.begin(), vec.end());

  int ans = 0;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < i; j++) {
      for (int k = 0; k < j; k++) {
        if (vec[k] != vec[j] && vec[i] != vec[j] && vec[k] + vec[j] > vec[i]) {
          ans++;
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}
