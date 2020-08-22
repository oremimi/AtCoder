#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  rep(i, 5) {
    int tmp;
    cin >> tmp;
    if (tmp == 0) {
      cout << i + 1;
    }
  }

  return 0;
}
