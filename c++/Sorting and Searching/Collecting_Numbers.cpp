#include <bits/stdc++.h>
using namespace std;

int collecting_numbers(vector<int> &arr) {

  // Atleast one round is needed
  int round = 1;
  int n = arr.size();
  map<int, int> position;
  for (int i = 0; i < n; i++)
    position[arr[i]] = i + 1;

  for (int val = 1; val < n; val++) {
    if (position[val + 1] < position[val])
      round++;
  }
  return round;
}

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int &num : arr)
    cin >> num;
  cout << collecting_numbers(arr);
}