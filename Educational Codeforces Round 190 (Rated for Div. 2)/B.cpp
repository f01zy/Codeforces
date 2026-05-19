#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  string s;
  cin >> s;
  int n = s.size(), ans = 0, two = 0;
  for (int i = n - 1; i >= 0; i--) {
    int num = s[i] - '0';
    if (num == 4) ans++;
    if (num == 2) two++;
    if ((num == 1 || num == 3) && two > 0) {
      two--;
      ans++;
    }
  }
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
