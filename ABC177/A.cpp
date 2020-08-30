#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int D, T, S;
  cin >> D >> T >> S;

  if (T * S >= D) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}