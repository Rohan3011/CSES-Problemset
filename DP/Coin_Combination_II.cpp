#include <iostream>
using namespace std;

const int mod = 1e9 + 7;
int main() {
  int n, sum;
  cin >> n >> sum;
  int coins[n];
  for (auto &c : coins)
    cin >> c;	

	int dp[sum+1][n+1];
	dp[0][0] = 1 ;
	for(int x = 1 ; x <= sum ; x++){
		for(auto &c : coins){
			if(x - c >= 0)
				(dp[x] += dp[x-c])%=mod ;
		}
	}
	cout << dp[sum];
}

/**
 * state depends on previously choosen element and Sum 
 */