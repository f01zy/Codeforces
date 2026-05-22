#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
using ll = long long;
void solve() {
  string s, t;
  cin >> s >> t;
  int c[128]{0};
  for (int i = 0; i < t.size(); i++) {
    c[t[i]]++;
  }
  for (int i = 0; i < s.size(); i++) {
    c[s[i]]--;
  }
  for (int i = 0; i < 128; i++) {
    if (c[i] < 0) {
      cout << "Impossible" << endl;
      return;
    }
  }
  sort(t.begin(), t.end());
  auto i = s.begin(), j = t.begin();
  while (j != t.end()) {
    if (!c[*j]) {
      j++;
      continue;
    }
    if (i == s.end() || *i > *j) {
      c[*j]--;
      i = s.insert(i, *j);
      i++;
      j++;
    } else {
      i++;
    }
  }
  cout << s << endl;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
