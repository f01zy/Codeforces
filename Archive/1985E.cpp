#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  ll x, y, z, k;
  cin >> x >> y >> z >> k;
  ll ans = 0;
  for (ll a = 1; a <= x; a++) {
    if (k % a == 0) {
      ll area = k / a;
      for (ll b = 1; b <= y; b++) {
        if (area % b == 0) {
          ll c = area / b;
          if (c <= z) ans = max(ans, (x - a + 1) * (y - b + 1) * (z - c + 1));
        }
      }
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
