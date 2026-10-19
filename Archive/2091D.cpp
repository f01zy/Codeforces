#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  ll n, m, k;
  cin >> n >> m >> k;
  ll l = -1, r = m + 1;
  while (r - l > 1) {
    ll mid = (r + l) / 2;
    ll row = mid * floor(m / (mid + 1)) + m % (mid + 1);
    ll can = row * n;
    if (can >= k) {
      r = mid;
    } else {
      l = mid;
    }
  }
  cout << r << endl;
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
