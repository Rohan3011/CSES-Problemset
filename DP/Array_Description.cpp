#include <iostream>
#include <vector>
using namespace std;

const int mod = 1e9 + 7;

int possible(vector<int> &arr, int limit, int idx) {
  int count = 0, value = arr[idx];
  for (int x = value - 1; x <= value + 1; x++) {
    if (x <= 0 || x > limit)
      continue;
    if (idx + 2 < arr.size()) {
      if (abs(arr[idx + 2] - x) <= 1)
        count++;
    } else
      count++;
  }
  return count;
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> arr(n);
  for (auto &u : arr)
    cin >> u;
  int ans = 1;
  for (int i = 1; i < n; i++) {
    if (!arr[i])
      ans = (ans * possible(arr, m, i - 1)) %mod;
  }
  cout << ans << endl;
}