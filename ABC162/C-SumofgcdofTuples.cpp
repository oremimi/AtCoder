#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if (a % b == 0) {
    return b;
  } else {
    return gcd(b, a % b);
  }
}

int main() {
  int N;
  cin >> N;

  long long sum = 0;

  for (int a = 1; a <= N; a++) {
    for (int b = 1; b <= N; b++) {
      int t = gcd(a, b);
      for (int c = 1; c <= N; c++) {
        sum += gcd(t, c);
      }
    }
  }

  cout << sum << endl;

  return 0;
}