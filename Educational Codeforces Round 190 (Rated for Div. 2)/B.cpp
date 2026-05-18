// TODO
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  string s;
  cin >> s;
  ll n = s.size(), ans = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '4') ans++;
  }
  ll i = 0, j = n - 1;
  while (j >= i) {
    char ch = s[i];
    if (ch == '1' || ch == '3') {
      while (j >= i && s[j] != '2') {
        j--;
      }
      if (i == j) break;
      ans++;
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
