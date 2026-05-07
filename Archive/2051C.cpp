#include <iostream>
#include <vector>
using namespace std;

void solve() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> t;
  for (int i = 0; i < m; i++) {
    int num;
    cin >> num;
    t.push_back(num);
  }
  int a = 0;
  for (int i = 0; i < n; i++) {
    a += i + 1;
  }
  int b = 0;
  for (int i = 0; i < k; i++) {
    int num;
    cin >> num;
    b += num;
  }
  int d    = a - b;
  int diff = n - k;
  if (!diff || diff >= 2) {
    for (int i = 0; i < m; i++) {
      cout << (!diff ? 1 : 0);
    }
  } else {
    for (int i = 0; i < m; i++) {
      cout << (t[i] == d ? 1 : 0);
    }
  }
  cout << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
