#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  ll n, m, a, b;
  cin >> n >> m >> a >> b;
  if (gcd(n, a) == 1 && gcd(m, b) == 1 && gcd(n, m) <= 2) {
    cout << "YES" << endl;
    return;
  }
  cout << "NO" << endl;
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
