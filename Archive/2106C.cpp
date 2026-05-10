#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  ll n, k;
  cin >> n >> k;
  ll s = -1, p = -1, t = LLONG_MAX;
  vector<ll> a, b;
  for (int i = 0; i < n; i++) {
    ll num;
    cin >> num;
    a.push_back(num);
    s = max(s, num);
    t = min(t, num);
  }
  bool possible = true;
  for (int i = 0; i < n; i++) {
    ll num;
    cin >> num;
    b.push_back(num);
    if (b[i] != -1) {
      if (p == -1) {
        p = a[i] + b[i];
      } else if (a[i] + b[i] != p) {
        possible = false;
      }
    }
  }
  if (!possible || (p != -1 && p < s) || p - t > k) {
    cout << 0 << endl;
    return;
  }
  if (p != -1) {
    cout << 1 << endl;
  } else {
    cout << k - s + t + 1 << endl;
  }
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
