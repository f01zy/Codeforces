// TODO
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll size(ll a) {
  if (!a) return 1;
  ll ans = 0;
  while (a) {
    ans++;
    a /= 10;
  }
  return ans;
}
ll process(ll a, vector<ll> &d, ll curr, ll l, ll m) {
  if (m > l + 1) return abs(a - curr);
  ll ans = abs(a - curr);
  for (int i = 0; i < d.size(); i++) {
    ll num = d[i];
    if (!curr && !num) continue;
    ll next = curr * 10 + num;
    ans     = min(ans, process(a, d, next, l, m + 1));
  }
  return ans;
}
void solve() {
  ll a, n;
  cin >> a >> n;
  vector<ll> d(n);
  for (ll &i : d) {
    cin >> i;
  }
  ll ans = process(a, d, 0, size(a), 0);
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
