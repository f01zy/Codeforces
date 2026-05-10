#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> h(n);
  for (int &i : h) {
    cin >> i;
  }
  int curr = h[k - 1];
  sort(h.begin(), h.end());
  for (int i = 0; i < n - 1; i++) {
    if (h[i] < curr) continue;
    if (h[i + 1] - h[i] > curr) {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
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
