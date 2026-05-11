#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  string s, t;
  cin >> s >> t;
  bool q = false;
  for (int i = 0; i < t.size(); i++) {
    if (t[i] == 'a') {
      q = true;
      break;
    }
  }
  if (q) {
    cout << (t.size() == 1 ? 1 : -1) << endl;
  } else {
    cout << (ll)pow(2, s.size()) << endl;
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
