#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  ll n;
  cin >> n;
  vector<ll> a;
  for (ll i = 0; i < n; i++) {
    ll num;
    cin >> num;
    a.push_back(num);
  }
  ll m = a[0], k = 0;
  for (ll i = 1; i < n; i++) {
    if (a[i] < m) k = max(k, m - a[i]);
    m = max(m, a[i]);
  }
  ll prev = a[0];
  for (ll i = 1; i < n; i++) {
    if (a[i] < prev) {
      if (a[i] + k < prev) {
        cout << "No" << endl;
        return;
      }
      prev = a[i] + k;
    } else {
      prev = a[i];
    }
  }
  cout << "Yes" << endl;
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
