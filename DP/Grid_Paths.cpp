#include <iostream>
#include <vector>
int const mod = 1e9 + 7;

// dp(x,y) = dp(x-1,y) + dp(x,y-1)
int grid_paths(int n, std::vector<std::vector<int>> &grid) {
  if (!grid[0][0])
    return 0;

  std::vector<std::vector<int>> dp(n, std::vector<int>(n, 0));
  // Initialize
  dp[0][0] = 1;
  for (int x = 0; x < n; x++) {
    for (int y = 0; y < n; y++) {
      if (!grid[x][y])
        continue;
      if (x - 1 >= 0)
        (dp[x][y] += dp[x - 1][y] % mod) %= mod;
      if (y - 1 >= 0)
        (dp[x][y] += dp[x][y - 1] % mod) %= mod;
    }
  }
  return dp[n - 1][n - 1];
}

int main() {
  int n;
  std::cin >> n;
  std::vector<std::vector<int>> grid(n, std::vector<int>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      char ch;
      std::cin >> ch;
      // `.` is empty/free and `*` is trap
      grid[i][j] = (ch == '.');
    }
  }
  std::cout << grid_paths(n, grid) << std::endl;
}