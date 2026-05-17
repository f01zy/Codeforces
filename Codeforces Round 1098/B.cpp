#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  ll n, x1, x2, k;
  cin >> n >> x1 >> x2 >> k;
  if (n == 2 || n == 3) {
    cout << 1 << endl;
    return;
  }
  ll d   = min(abs(x1 - x2), n - abs(x1 - x2));
  ll ans = k + d;
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
