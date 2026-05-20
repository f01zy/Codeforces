#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  ll n;
  cin >> n;
  ll px, py, qx, qy;
  cin >> px >> py >> qx >> qy;
  ll s = 0, m = 0;
  for (int i = 0; i < n; i++) {
    ll num;
    cin >> num;
    s += num;
    m  = max(m, num);
  }
  ll d = (px - qx) * (px - qx) + (py - qy) * (py - qy);
  ll c = (m * 2 - s) * (m * 2 - s);
  if (s * s < d || (m * 2 > s && c > d)) {
    cout << "No" << endl;
    return;
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
