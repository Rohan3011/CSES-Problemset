#include <iostream>
#define INF 1e9

// greedy solution also works

int main() {
  int n;
  std::cin >> n;
  int dp[n + 1];
  dp[0] = 0;

  for (int x = 1; x <= n; x++) {
    int value = x;
    dp[x] = INF;
    while (value) {
      int digit = value % 10;
      value /= 10;
      if (x - digit >= 0)
        dp[x] = std::min(dp[x], dp[x - digit] + 1);
    }
  }
  std::cout << dp[n] << std::endl;
}