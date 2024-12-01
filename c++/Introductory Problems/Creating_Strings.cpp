#include <bits/stdc++.h>
using namespace std;

void create_strings(string s , vector<string> &ans) {
  sort(s.begin(), s.end());
  do {
    ans.push_back(s) ;
  } while (next_permutation(s.begin(), s.end()));
}

int main() {

  string s;
  cin >> s;
  vector<string> ans ;
  create_strings(s , ans);
  cout << ans.size() << "\n";
  for(auto u : ans)
    cout << u << "\n";
}