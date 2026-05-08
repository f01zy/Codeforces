#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n;
  cin >> n;
  vector<int> nums;
  long long s = 0;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    s += num;
    nums.push_back(num);
  }
  sort(nums.begin(), nums.end());
  float c = (float)s / n;
  int i = 0, t = 0;
  for (; i < n; i++) {
    if (nums[i] >= c / 2) break;
    t++;
  }
  if (t > n / 2) {
    cout << 0 << endl;
    return;
  }
  int p = i + n / 2 - t;
  if (n == 1 || (n == 2 && nums[1] >= c / 2) || p >= n) {
    cout << -1 << endl;
    return;
  }
  long long ans = (long long)n * nums[p] * 2 - s + 1;
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
