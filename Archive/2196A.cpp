#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  ll p, q;
  cin >> p >> q;
  ll d = q - p;
  if (p < q && 3 * p >= 2 * q) {
    cout << "Bob" << endl;
    return;
  }
  cout << "Alice" << endl;
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
