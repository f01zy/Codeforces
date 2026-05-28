#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  ll n;
  cin >> n;
  vector<ll> c(n);
  ll p = 0, g = 0;
  for (ll &i : c) {
    cin >> i;
    if (i == 1) {
      p++;
    } else {
      g++;
    }
  }
  ll ans = 0;
  if (g == 1) {
    for (int i = 0; i < n; i++) {
      if (c[i] != 1) ans += c[i];
    }
    ans += min(p, ans / 2);
  } else if (g > 1) {
    for (int i = 0; i < n; i++) {
      if (c[i] == 1) continue;
      if (c[i] < 4) {
        ans += c[i];
        continue;
      }
      ll d  = min(p, (c[i] - 2) / 2);
      p    -= d;
      ans  += c[i] + d;
    }
  }
  if (ans < 3) ans = 0;
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
