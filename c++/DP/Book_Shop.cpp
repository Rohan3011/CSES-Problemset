#include <cstring> // memset
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, limit;
  cin >> n >> limit;
  int prices[n], pages[n];
  for (int &price : prices)
    cin >> price;
  for (int &page : pages)
    cin >> page;

  // dp[x][k] = max(dp[x-price[k]][k-1]+pages[k], dp[x][k-1])

  int dp[limit + 1][n + 1];
  memset(dp, 0, sizeof(dp));
  for (int k = 1; k <= n; k++) { // 1 based indexing
    for (int x = 1; x <= limit; x++) {
      dp[x][k] = dp[x][k - 1];
      if (x - prices[k - 1] >= 0)
        dp[x][k] = max(dp[x][k], dp[x - prices[k - 1]][k - 1] + pages[k - 1]);
    }
  }

  cout << dp[limit][n] << endl;
}