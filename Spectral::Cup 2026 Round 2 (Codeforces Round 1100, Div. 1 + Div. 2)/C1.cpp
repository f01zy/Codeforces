#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (ll &i : a) {
    cin >> i;
  }
  int p = 1;
  vector<ll> ans;
  for (int i = n - 1; i >= 0; i--) {
    int curr = a[i] * p;
    if (curr > 0) {
      p = p == 1 ? -1 : 1;
      ans.push_back(i + 1);
    }
  }
  cout << ans.size() << endl;
  for (ll &i : ans) {
    cout << i << " ";
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
