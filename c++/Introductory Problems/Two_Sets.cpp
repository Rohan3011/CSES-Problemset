#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define NO                                                                     \
  {                                                                            \
    cout << "NO\n";                                                            \
    return;                                                                    \
  }

void two_sets(long long n) {
  long long sum = n * (n + 1) / 2;
  if (sum & 1) 
    NO;
  sum /= 2;
  int set1_size = 0;
  vector<int> set1(n + 1, false);
  for (int x = n; x > 0 && sum > 0; x--) {
    if (sum >= x) {
      sum -= x;
      set1[x] = true;
      set1_size++;
    }
  }

  if (sum)
    NO;
  cout << "YES\n" << set1_size << "\n";
  for (int i = 1; i <= n; i++) {
    if (set1[i])
      cout << i << " ";
  }
  cout << "\n" << n - set1_size << "\n";
  for (int i = 1; i <= n; i++) {
    if (!set1[i])
      cout << i << " ";
  }

  cout << "\n";
}

int main() {
  // ios::sync_with_stdio(0);cin.tie(0);
  long long n;
  cin >> n;
  two_sets(n);
}