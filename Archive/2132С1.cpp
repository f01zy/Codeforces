#include <cmath>
#include <iostream>
using namespace std;
#define N 20

int main() {
  static long long a[N], b[N];
  for (int i = 0; i < N; i++) {
    a[i] = pow(3, i);
    b[i] = pow(3, i + 1) + i * pow(3, i - 1);
  }
  int t;
  cin >> t;
  while (t--) {
    long long n, ans = 0;
    cin >> n;
    for (int i = N - 1; i >= 0; i--) {
      while (n >= a[i]) {
        n   -= a[i];
        ans += b[i];
      }
    }
    cout << ans << endl;
  }
}
