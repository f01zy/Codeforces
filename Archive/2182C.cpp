#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll process(vector<ll> &a, vector<ll> &b) {
  ll n   = a.size();
  ll ans = 0;
  for (ll i = 0; i < n; i++) {
    bool ok = true;
    for (ll j = 0; j < n; j++) {
      if (a[j] >= b[(i + j) % n]) {
        ok = false;
        break;
      }
    }
    if (ok) ans++;
  }
  return ans;
}
void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n), b(n), c(n);
  for (ll &i : a) {
    cin >> i;
  }
  for (ll &i : b) {
    cin >> i;
  }
  for (ll &i : c) {
    cin >> i;
  }
  cout << process(a, b) * process(b, c) * n << endl;
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
