// TODO
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  ll n, x;
  cin >> n >> x;
  vector<vector<ll>> a(n, vector<ll>(3));
  ll b = -1, c = -1;
  for (vector<ll> &i : a) {
    cin >> i[0] >> i[1] >> i[2];
    b = max(b, i[0] * i[1] - i[2]);
    c = max(c, i[0] * (i[1] - 1));
  }
  if (c >= x) {
    cout << 0 << endl;
    return;
  }
  if (b <= 0) {
    cout << -1 << endl;
    return;
  }
  cout << (x - c + b - 1) / b << endl;
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
