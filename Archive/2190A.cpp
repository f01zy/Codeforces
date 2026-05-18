#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  int n;
  string s;
  cin >> n >> s;
  int zeros = 0, ones = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '0') zeros++;
    if (s[i] == '1') ones++;
  }
  vector<int> ans;
  for (int i = 0; i < n - ones; i++) {
    if (s[i] != '0') ans.push_back(i);
  }
  for (int i = n - ones; i < n; i++) {
    if (s[i] != '1') ans.push_back(i);
  }
  if (ans.empty()) {
    cout << "Bob" << endl;
  } else {
    cout << "Alice" << endl;
    cout << ans.size() << endl;
    for (int &i : ans) {
      cout << i + 1 << " ";
    }
    cout << endl;
  }
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
