#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  int w, h, a, b;
  int x1, y1, x2, y2;
  cin >> w >> h >> a >> b;
  cin >> x1 >> y1 >> x2 >> y2;
  int diffX = min(w, max(x1, x2) - min(x1, x2) - a);
  int diffY = min(h, max(y1, y2) - min(y1, y2) - b);
  if ((diffX < 0 && diffY % b) || (diffY < 0 && diffX % a) || (diffX > 0 && diffY > 0 && diffX % a && diffY % b)) {
    cout << "No" << endl;
    return;
  }
  cout << "Yes" << endl;
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
