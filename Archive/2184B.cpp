#include <bits/stdc++.h>
using namespace std;
void solve() {
  int s, k, m;
  cin >> s >> k >> m;
  int ss = s, sk = k, sm = m;
  while (sm > 0) {
    int t  = min(sk, sm);
    sk    -= t;
    sm    -= t;
    ss    -= t;
    if (ss < 0) ss = 0;
    if (sk == 0) {
      ss = s - ss;
      sk = k;
    }
    if (sk < ss && sk < sm) {
      int a = ss / sk, b = sm / sk;
      ss  = min(a, b) % 2 ? sk : ss;
      sm -= sk * min(a, b);
    }
  }
  cout << ss << endl;
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
