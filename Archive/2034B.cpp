#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n, m, k;
  cin >> n >> m >> k;
  string s;
  cin >> s;
  int c = 0, ans = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '0') {
      c++;
    } else {
      c = 0;
    }
    if (c == m) {
      i += k - 1;
      ans++;
      c = 0;
    }
  }
  cout << ans << endl;
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
