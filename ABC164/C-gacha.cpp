#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  string A[N];
  for (int i = 0; i < N; i++) cin >> A[i];

  map<string, int> prize;
  for (int i = 0; i < N; i++) {
    prize.insert(make_pair(A[i], i));
  }

  cout << prize.size() << endl;

  return 0;
}