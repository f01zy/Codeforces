// TODO
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  int n;
  cin >> n;
  int p = 0, q = 0, ans = 0;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    if (!p) {
      p = q = num;
      continue;
    }
    if (num <= p || num - q > 1) {
      p = q = num;
      ans++;
      continue;
    }
    q = max(q, num);
  }
  ans++;
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
