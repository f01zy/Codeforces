#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  ll n, k, x;
  cin >> n >> k >> x;
  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
    ll num;
    cin >> num;
    a[i] = num;
  }
  vector<ll> p(n, a[0]);
  for (int i = 1; i < n; i++) {
    p[i] = p[i - 1] + a[i];
  }
  ll d = p[n - 1] * k - x;
  if (d < 0) {
    cout << 0 << endl;
    return;
  }
  ll t   = d / p[n - 1];
  ll s   = (k - t) * p[n - 1];
  ll ans = t * n;
  for (int i = 0; i < n; i++) {
    if (s < x) break;
    ans++;
    s -= a[i];
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
