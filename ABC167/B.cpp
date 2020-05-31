#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, K;
  cin >> A >> B >> C >> K;

  int max = 0;
  if (A >= K) {
    cout << K << endl;
  } else {
    K = K - A;
    if (B >= K) {
      cout << A << endl;
    } else {
      K = K - B;
      cout << A - K << endl;
    }
  }

  return 0;
}
