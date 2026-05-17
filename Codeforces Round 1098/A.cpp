#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  ll n;
  cin >> n;
  vector<ll> w(n);
  ll a = 0, b = 0, c = 0;
  for (ll &i : w) {
    cin >> i;
    if (i == 0) a++;
    if (i == 1) b++;
    if (i == 2) c++;
  }
  ll t   = min(b, c);
  ll ans = a + t + (b - t) / 3 + (c - t) / 3;
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
