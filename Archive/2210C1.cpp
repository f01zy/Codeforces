#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  int n;
  cin >> n;
  vector<ll> a(n), b(n);
  int ans = 0;
  for (ll &i : a) {
    cin >> i;
  }
  for (ll &i : b) {
    cin >> i;
  }
  if (gcd(a[0], a[1]) < a[0]) ans++;
  if (gcd(a[n - 1], a[n - 2]) < a[n - 1]) ans++;
  for (int i = 1; i < n - 1; i++) {
    if (lcm(gcd(a[i - 1], a[i]), gcd(a[i], a[i + 1])) < a[i]) ans++;
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
