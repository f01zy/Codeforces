#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  ll n;
  cin >> n;
  vector<ll> b(n);
  ll s = 0, z = 0;
  for (ll &i : b) {
    cin >> i;
    s += i;
    if (i == 0) z++;
  }
  cout << min(n - z, s - n + 1) << endl;
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
