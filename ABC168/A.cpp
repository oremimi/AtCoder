#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  if (S[S.size() - 1] == '3') {
    cout << "bon" << endl;
  } else if (S[S.size() - 1] == '0' || S[S.size() - 1] == '1' ||
             S[S.size() - 1] == '6' || S[S.size() - 1] == '8') {
    cout << "pon" << endl;
  } else {
    cout << "hon" << endl;
  }

  return 0;
}
