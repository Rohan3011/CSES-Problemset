#include <bits/stdc++.h>
using namespace std;

/*
  In a sorted array of `n` integers,
  the smallest missing sum would be
  `sum + 1` where sum is summation
  of values in range [0...n]
*/
long long missing_coin_sum(vector<int> coins) {
  long long ans = 1;
  sort(coins.begin(), coins.end());
  for (int &coin : coins) {
    if (coin > ans)
      break;
    ans += coin;
  }
  return ans;
}

int main() {
  int n;
  cin >> n;
  vector<int> coins(n);
  for (int &coin : coins)
    cin >> coin;
  cout << missing_coin_sum(coins);
}