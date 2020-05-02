#include <bits/stdc++.h>
using namespace std;

int main() {
  long long X, depo = 100;
  cin >> X;

  int year = 1;
  while (depo < X) {
    depo = depo * 1.01;
    if (depo < X) year++;
  }

  cout << year << endl;

  return 0;
}