#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n, 0), b(n);
  for (ll &i : b) {
    cin >> i;
  }
  ll m = b[0];
  for (int i = 1; i < n; i++) {
    if (b[i] >= m * 2) {
      cout << "NO" << endl;
      return;
    }
    m = min(m, b[i]);
  }
  cout << "YES" << endl;
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
