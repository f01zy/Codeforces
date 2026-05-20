#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  ll n, k;
  cin >> n >> k;
  vector<vector<int>> a(n, vector<int>(3));
  for (auto &i : a) {
    cin >> i[0] >> i[1] >> i[2];
  }
  sort(a.begin(), a.end(), [](vector<int> &a, vector<int> &b) { return a[2] < b[2]; });
  for (auto &i : a) {
    if (k < i[0] || k > i[1] || k >= i[2]) continue;
    k = i[2];
  }
  cout << k << endl;
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
