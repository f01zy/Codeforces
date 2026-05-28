// TODO
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  vector<pair<ll, ll>> ans;
  ll s = 0;
  for (ll &i : a) {
    cin >> i;
    s += i;
  }
  ans.push_back({-1, s});
  ll l = 0;
  for (int i = 0; i < n; i++) {
    ll num = a[i];
    if (num > 0) {
      ll prev = ans[ans.size() - 1].second;
      ll curr = prev + l * 2 - num * 2;
      ans.push_back({i, curr});
      if (i) ans.push_back({i - 1, prev - num * 2});
    }
    l += abs(num);
  }
  ll j = 0;
  for (int i = 0; i < n + 1 && i < ans.size(); i++) {
    if (ans[i].second > ans[j].second) j = i;
  }
  cout << j << endl;
  if (j) {
    for (int i = 1; i <= j; i++) {
      cout << ans[i].first + 1 << " ";
    }
  }
  cout << endl;
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
