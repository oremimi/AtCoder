#include <bits/stdc++.h>
using namespace std;

int main() {
  char S[6];
  scanf("%s", S);

  if (S[2] == S[3] && S[4] == S[5]) {
    printf("Yes");
  } else {
    printf("No");
  }

  return 0;
}
