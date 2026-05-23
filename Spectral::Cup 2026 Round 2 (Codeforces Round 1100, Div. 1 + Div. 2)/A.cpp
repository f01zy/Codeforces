#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  int n;
  cin >> n;
  int p = 0, q = INT_MAX;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    p = max(p, num);
    q = min(q, num);
  }
  int t   = p - q;
  int ans = t % 2 ? t / 2 + 1 : t / 2;
  cout << ans << endl;
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
