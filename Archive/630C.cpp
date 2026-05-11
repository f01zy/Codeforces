#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  int n;
  cin >> n;
  ll ans  = 0;
  ll curr = 2;
  for (int i = 0; i < n; i++) {
    ans  += curr;
    curr *= 2;
  }
  cout << ans << endl;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}
