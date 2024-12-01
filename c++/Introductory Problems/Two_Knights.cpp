#include <iostream>
using namespace std;

long long two_knights(long long n) {
  // choose 2 out of n*n cells
  long long total = n * n * (n * n - 1) / 2;

  // squares : 2*3 and 3*2
  long long attacking = 2 * 2 * (n - 1) * (n - 2);
  return total - attacking;
}

signed main() {
  long long n;
  cin >> n;
  for (long long i = 1; i <= n; i++)
    cout << two_knights(i) << "\n";
}