#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  int n;
  cin >> n;
  vector<int> ans;
  for (int i = 0; i < n; i++) {
    if (!i) {
      ans.push_back(1);
      continue;
    }
    int num = ans[i - 1] + 1;
    ans.push_back(num % 3 ? num : num + 1);
  }
  for (int &i : ans) {
    cout << i << " ";
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
