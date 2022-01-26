#include <bits/stdc++.h>
using namespace std;

void gray_code(int n) {
  int const N = 32;
  for (int i = 0; i < (1 << n); i++) {
    int val = (i ^ (i >> 1));
    bitset<N> bits(val);
    string str = bits.to_string();
    cout << str.substr(N - n) << "\n";
  }
}

int main() {
  int n;
  cin >> n;
  gray_code(n);
}
