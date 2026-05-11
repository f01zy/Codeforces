#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n;
  cin >> n;
  if (n % 2) {
    cout << 0 << endl;
  } else {
    cout << ((n / 2) % 2 ? n / 4 : n / 4 - 1) << endl;
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}
