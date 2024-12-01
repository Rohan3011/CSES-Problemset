#include <algorithm>
#include <iostream>
using namespace std;

const int mod = 1e9 + 7;
int main() {
  int n, sum;
  cin >> n >> sum;
  int coins[n];
  for (auto &c : coins)
    cin >> c;
  int ways[sum + 1];
  ways[0] = 1;

  for (int x = 1; x <= sum; x++) {
    ways[x] = 0;
    for (auto &c : coins) {
      if (x - c >= 0)
        (ways[x] += ways[x - c]) %= mod;
      ways[x] %= mod;
    }
  }
  cout << ways[sum];
}