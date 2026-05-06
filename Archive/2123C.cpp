#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    vector<int> nums;
    for (int j = 0; j < n; j++) {
      int num;
      cin >> num;
      nums.push_back(num);
    }
    vector<int> prefix(n, nums[0]);
    for (int j = 1; j < n; j++) {
      prefix[j] = min(nums[j], prefix[j - 1]);
    }
    vector<int> suffix(n, nums[n - 1]);
    for (int j = n - 2; j >= 0; j--) {
      suffix[j] = max(nums[j], suffix[j + 1]);
    }
    cout << 1;
    for (int j = 1; j < n - 1; j++) {
      int num   = nums[j];
      int left  = prefix[j - 1];
      int right = suffix[j + 1];
      cout << ((left < num && right > num) ? 0 : 1);
    }
    cout << 1 << endl;
  }
}
