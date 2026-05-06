#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, q;
    cin >> n >> q;
    vector<int> a, b;
    for (int i = 0; i < n; i++) {
      int num;
      cin >> num;
      a.push_back(num);
    }
    for (int i = 0; i < n; i++) {
      int num;
      cin >> num;
      b.push_back(num);
    }
    for (int i = n - 1; i >= 0; i--) {
      if (i < n - 1) a[i] = max(a[i], a[i + 1]);
      a[i] = max(a[i], b[i]);
    }
    vector<vector<int>> queries;
    for (int i = 0; i < q; i++) {
      int l, r;
      cin >> l >> r;
      queries.push_back({l, r});
    }
    vector<int> prefix(n, a[0]);
    for (int i = 1; i < n; i++) {
      prefix[i] = prefix[i - 1] + a[i];
    }
    for (int i = 0; i < q; i++) {
      int l = queries[i][0], r = queries[i][1];
      cout << (l == 1 ? prefix[r - 1] : prefix[r - 1] - prefix[l - 2]) << " ";
    }
    cout << endl;
  }
}
