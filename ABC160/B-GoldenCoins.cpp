#include <bits/stdc++.h>
using namespace std;

int main() {
  int X;
  scanf("%d", &X);

  int answer;
  answer = X / 500 * 1000;
  X = X - X / 500 * 500;
  answer += X / 5 * 5;

  printf("%d", answer);

  return 0;
}
