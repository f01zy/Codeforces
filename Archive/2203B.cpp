#include <bits/stdc++.h>
using namespace std;
int sum(long long x) {
  int ans = 0;
  while (x) {
    ans += x % 10;
    x   /= 10;
  }
  return ans;
}
int numLength(long long x) {
  int ans = 0;
  while (x) {
    x /= 10;
    ans++;
  }
  return ans;
}
int getDigitByIndex(long long x, int i) {
  long long f = 1;
  for (int j = 0; j < i; j++) {
    f *= 10;
  }
  return (x / f) % 10;
}
void solve() {
  long long x;
  cin >> x;
  int s = sum(x), l = numLength(x), ans = 0;
  vector<bool> c(l);
  while (s >= 10) {
    int i = -1;
    for (int j = 0; j < l; j++) {
      if (!c[j] && (i == -1 || getDigitByIndex(x, i) < getDigitByIndex(x, j))) i = j;
    }
    c[i]   = true;
    int d  = getDigitByIndex(x, i);
    s     -= i == l - 1 ? d - 1 : d;
    ans++;
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
