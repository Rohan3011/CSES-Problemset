#include <iostream>
using namespace std;

#define int long long

int two_knights(int n) {
  // choose 2 out of n*n cells
  int total = n * n * (n * n - 1) / 2;

  // squares : 2*3 and 3*2
  int attacking = 2 * 2 * (n - 1) * (n - 2);
  return total - attacking;
}

signed main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
    cout << two_knights(i) << "\n";
}