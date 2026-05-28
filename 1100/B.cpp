#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n), b(n);
  for (ll &i : a) {
    cin >> i;
  }
  for (ll &i : b) {
    cin >> i;
  }
  for (int i = 0; i < n; i++) {
    if (a[i] > b[i]) swap(a[i], b[i]);
  }
  ll s = 0, m = 0;
  for (int i = 0; i < n; i++) {
    s += b[i];
    m  = max(m, a[i]);
  }
  ll ans = m + s;
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
