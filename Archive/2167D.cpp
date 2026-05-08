#include <bits/stdc++.h>
using namespace std;
#define N 70
void solve() {
  int n;
  cin >> n;
  vector<long long> nums;
  bool isOdd = false;
  for (int i = 0; i < n; i++) {
    long long num;
    cin >> num;
    if (num % 2) isOdd = true;
    nums.push_back(num);
  }
  if (isOdd) {
    cout << 2 << endl;
    return;
  }
  vector<bool> c(N, true);
  for (int i = 2; i < N; i++) {
    if (c[i]) {
      for (int j = i * 2; j < N; j += i) {
        c[j] = false;
      }
    }
  }
  int ans = INT_MAX;
  for (int i = 0; i < n; i++) {
    for (int j = 2; j < N; j++) {
      if (!c[j]) continue;
      if (nums[i] % j) {
        ans = min(ans, j);
        break;
      }
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
