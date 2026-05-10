#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  ll n, k;
  cin >> n >> k;
  vector<ll> m(n);
  ll s = 0;
  for (ll &i : m) {
    cin >> i;
    s += i;
  }
  sort(m.begin(), m.end());
  if (max(m[n - 1] - 1, m[n - 2]) - m[0] > k) {
    cout << "Jerry" << endl;
    return;
  }
  cout << (s % 2 ? "Tom" : "Jerry") << endl;
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
