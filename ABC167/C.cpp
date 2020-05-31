#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, X;
  vector<int> C;
  vector<vector<int>> A;

  cin >> N >> M >> X;
  for (int i = 1; i <= N; i++) {
    cin >> C[i];
    for (int j = 1; j <= M; j++) {
      cin >> A[i][j];
    }
  }

  int ans = -1, tmp = 0;
  for (int i = 1; i <= N - 2; i++) {
    tmp = C[i];
    for (int j = i + 1; j <= N - 1; j++) {
      tmp = tmp + C[j];
      for (int k = j + 1; k <= N; k++) {
        tmp = tmp + C[k];
            }
    }
  }

  return 0;
}
