#include <iostream>
using namespace std;

const int mod = 1e9 + 7;
int main() {
  int n, target;
  cin >> n >> target;
  int coins[n];
  // target and first coin
  int dp[target + 1];
  for (auto &c : coins)
    cin >> c;
  // sort(coins , coins + n) ;
  dp[0] = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= target; j++) {
      if (j - coins[i] >= 0)
        dp[j] = (dp[j] + dp[j - coins[i]]) % mod;
    }
  }
  cout << dp[target] << "\n";
}

/**
 * state depends on previously choosen element and Sum
 */