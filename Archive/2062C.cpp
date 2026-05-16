#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  ll ans = 0;
  for (ll &i : a) {
    cin >> i;
    ans += i;
  }
  while ((n = a.size()) > 1) {
    ll b = 0, c = 0;
    for (ll i = 0; i < n - 1; i++) {
      b += a[i] - a[i + 1];
    }
    for (ll i = n - 1; i >= 1; i--) {
      a[i] -= a[i - 1];
      c    += a[i];
    }
    ans = max({ans, b, c});
    a.erase(a.begin());
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
