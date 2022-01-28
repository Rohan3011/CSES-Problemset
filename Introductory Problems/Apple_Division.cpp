#include <bits/stdc++.h>
#include <numeric>
using namespace std;
typedef long long ll;

ll apple_divison(vector<ll> apples, int n, ll sum, ll total) {
  if (n < 0) {
    return abs((total - sum) - sum);
  }
  return min(apple_divison(apples, n - 1, sum + apples[n], total),
             apple_divison(apples, n - 1, sum, total));
}

int main() {
  // ios::sync_with_stdio(0);cin.tie(0);
  ll n;
  cin >> n;
  vector<ll> apples(n);
  for (auto &a : apples)
    cin >> a;
  ll total = accumulate(apples.begin(), apples.end(), 0ll);

  cout << apple_divison(apples, n - 1, 0, total) << "\n";
}