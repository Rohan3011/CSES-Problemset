#include <iostream>
using namespace std;

const int mod = 1e9 + 7;

int main() {
  int sum;
  cin >> sum;
  int ways[sum + 1];
  ways[0] = 1;
  for (int x = 1; x <= sum; x++) {
    ways[x] = 0;
    for (int d = 1; d <= 6; d++) {
      if (x - d >= 0)
        (ways[x] += ways[x - d]) %= mod;
    }
  }
  cout << ways[sum];
}