#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  int n, m;
  cin >> n >> m;
  int a[n][m];
  vector<pair<int, ll>> b(n);
  for (int i = 0; i < n; i++) {
    ll s = 0;
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
      s += a[i][j];
    }
    b[i].first = i;
    b[i].second = s;
  }
  sort(b.begin(), b.end(), [](pair<int, ll> a, pair<int, ll> b) { return a.second > b.second; });
  ll s = 0, t = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      t += a[b[i].first][j];
      s += t;
    }
  }
  cout << s << endl;
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
