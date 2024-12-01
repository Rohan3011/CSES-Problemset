#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define INF 1e9

int min_coins(vector<int> coins, int sum) {
  vector<int> minCoins(sum + 1, INF);
  minCoins[0] = 0;
  for (int x = 1; x <= sum; x++) {
    for (auto &c : coins) {
      if (x - c >= 0)
        minCoins[x] = min(minCoins[x], minCoins[x - c] + 1);
    }
  }
  if (minCoins[sum] >= INF)
    minCoins[sum] = -1;
  return minCoins[sum];
}

int main() {
  int n, sum;
  cin >> n >> sum;
  vector<int> coins(n);
  for (auto &c : coins)
    cin >> c;

  cout << min_coins(coins, sum);
}