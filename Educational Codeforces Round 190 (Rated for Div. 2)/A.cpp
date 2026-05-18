#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  ll n, a, b;
  cin >> n >> a >> b;
  if (b >= a * 3) {
    ll ans = n * a;
    cout << ans << endl;
  } else {
    ll count  = n / 3;
    ll ans    = count * b;
    n        %= 3;
    ans      += min(b, n * a);
    cout << ans << endl;
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
