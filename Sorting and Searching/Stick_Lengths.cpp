#include <bits/stdc++.h>
using namespace std;

long long calculate_cost(vector<int> &sticks, int median) {
  long long cost = 0;
  for (int stick : sticks)
    cost += abs(median - stick);
  return cost;
}

long long stick_lengths(vector<int> sticks) {
  int n = sticks.size();
  long long cost1, cost2 = 0;
  sort(sticks.begin(), sticks.end());
  cost1 = calculate_cost(sticks, sticks[n / 2]);
  cost2 = calculate_cost(sticks, sticks[n / 2 + 1]);
  return min(cost1, cost2);
}

int main() {
  int n;
  cin >> n;
  vector<int> sticks(n);
  for (int &stick : sticks)
    cin >> stick;
  cout << stick_lengths(sticks);
}