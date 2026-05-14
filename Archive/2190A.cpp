// TODO
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  int n;
  string s;
  cin >> n >> s;
  int ones = 0, zeros = 0;
  for (int i = 0; i < n; i++) {
    if (i > 0 && s[i] == '0' && s[i - 1] == '1') ones++;
    if (i > 0 && s[i] == '1' && s[i - 1] == '0') zeros++;
    if (i == n - 1 && s[i] == '0') zeros++;
    if (i == n - 1 && s[i] == '1') zeros++;
  }
  if (s[0] == '0') zeros--;
  int d     = min(ones, zeros);
  int moves = (d + 1) * d / 2;
  if (moves % 2) {
    int i = 0, j = 0;
    while (j < n && s[j] != '1') {
      j++;
    }
    i = j;
    while (j < n && s[j] != '0') {
      j++;
    }
    while (j < n && s[j] != '1') {
      j++;
    }
    j--;
    cout << "Alice" << endl;
    cout << j - i + 1 << endl;
    for (int k = i; k <= j; k++) {
      cout << k + 1 << " ";
    }
    cout << endl;
    return;
  }
  cout << "Bob" << endl;
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
