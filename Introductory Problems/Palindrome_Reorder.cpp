#include <bits/stdc++.h>
using namespace std;

void palindrome_reorder(string s) {
  vector<int> count(26, 0);
  for (auto c : s) {
    count[c - 'A']++;
  }

  auto toChar = [](int x) { return char(x + 'A'); };

  int odds = 0;
  for (auto &u : count) {
    odds += (u & 1);
  }

  if (odds > 1) {
    puts("NO SOLUTION");
    return;
  }

  int oddChar = -1;
  string ans = "";
  for (int i = 0; i < 26; i++) {
    ans += string(count[i] / 2, toChar(i));
    if (count[i] & 1)
      oddChar = i;
  }

  cout << ans;
  if (oddChar != -1)
    cout << toChar(oddChar);
  reverse(ans.begin(), ans.end());
  cout << ans << "\n";
}

int main() {
  // ios::sync_with_stdio(0);cin.tie(0);
  string s;
  cin >> s;
  palindrome_reorder(s);
}