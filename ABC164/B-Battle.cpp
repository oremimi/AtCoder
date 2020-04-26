#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  for (int i = 1; i <= 100; i++) {
    C = C - B;
    A = A - D;

    if (C <= 0) {
      cout << "Yes" << endl;
      break;
    } else if (A <= 0) {
      cout << "No" << endl;
      break;
    }
  }

  return 0;
}