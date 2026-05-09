#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> s(n), t(n);
  for (int &i : s) {
    cin >> i;
    i = min(i % k, abs(i % k - k));
  }
  for (int &i : t) {
    cin >> i;
    i = min(i % k, abs(i % k - k));
  }
  sort(s.begin(), s.end());
  sort(t.begin(), t.end());
  for (int i = 0; i < n; i++) {
    if (s[i] != t[i]) {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
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
