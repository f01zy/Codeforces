#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  int n;
  cin >> n;
  vector<pair<int, ll>> b(n);
  vector<ll> a(n);
  bool is_null = false;
  for (int i = 0; i < n; i++) {
    ll num;
    cin >> num;
    b[i] = {i, num};
    if (!num) is_null = true;
  }
  if (!is_null) {
    cout << -1 << endl;
    return;
  }
  sort(b.begin(), b.end(), [](pair<int, ll> a, pair<int, ll> b) { return a.second < b.second; });
  ll prev = 0, sum = 0;
  vector<int> indices;
  for (int i = 0; i < n; i++) {
    int count = indices.size();
    int index = b[i].first;
    ll num = b[i].second;
    if (!count || num == b[i - 1].second) {
      indices.push_back(index);
      continue;
    }
    ll need = (num - sum) / count;
    ll r = (num - sum) % count;
    if (r || need <= prev) {
      cout << -1 << endl;
      return;
    }
    sum += need * count;
    prev = need;
    for (int j = 0; j < count; j++) {
      a[indices[j]] = need;
    }
    indices.clear();
    indices.push_back(index);
  }
  for (int j = 0; j < indices.size(); j++) {
    a[indices[j]] = prev + 1;
  }
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
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
