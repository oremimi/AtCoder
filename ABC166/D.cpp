#include <bits/stdc++.h>
using namespace std;

int main() {
  int X;
  cin >> X;

  int A = 0, B = 0, A5 = 0, B5 = 0;
  for (A; A5 < X; A++) {
    A5 = A * A * A * A * A;
    B = 0;
    B5 = 0;
    for (B; A5 + B5 < X; B++) {
      B5 = B * B * B * B * B;
      if (A5 + B5 == X) {
        cout << A << " " << B << endl;
        return 0;
      }
    }
  }

  for (A; A5 > X; A--) {
    A5 = A * A * A * A * A;
    B = 0;
    B5 = 0;
    for (B; A5 + B5 > X; B--) {
      B5 = B * B * B * B * B;
      if (A5 + B5 == X) {
        cout << A << " " << B << endl;
        return 0;
      }
    }
  }

  return 0;
}
