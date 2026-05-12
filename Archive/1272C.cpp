#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  ll n, k;
  string s;
  cin >> n >> k;
  cin >> s;
  vector<bool> c(26);
  for (ll i = 0; i < k; i++) {
    char ch;
    cin >> ch;
    c[ch - 'a'] = true;
  }
  ll ans = 0, l = 0;
  for (ll i = 0; i < n; i++) {
    bool d = c[s[i] - 'a'];
    if (d) l++;
    if (!d || i == n - 1) {
      ans += (l * (l + 1)) / 2;
      l    = 0;
    }
  }
  cout << ans << endl;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}
