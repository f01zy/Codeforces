#include <bits/stdc++.h>
using namespace std;
void solve() {
  long long a, b;
  cin >> a >> b;
  long long ans = -1;
  for (long long k = b; k >= 1; k /= 2) {
    if (!(b % k)) {
      long long sum = a * k + b / k;
      if (!(sum % 2)) ans = max(ans, sum);
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
