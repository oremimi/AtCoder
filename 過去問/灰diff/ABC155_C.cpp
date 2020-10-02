#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  map<string, int> poll;

  rep(i, N) {
    string s;
    cin >> s;
    poll[s]++;
  }

  auto maxPair = max_element(
      poll.begin(), poll.end(),
      [](const pair<string, int>& a, const pair<string, int>& b) -> bool {
        return a.second < b.second;
      });

  for (auto elm : poll) {
    if (maxPair->second == elm.second) {
      cout << elm.first << endl;
    }
  }

  return 0;
}