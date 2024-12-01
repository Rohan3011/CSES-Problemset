#include<bits/stdc++.h>
using namespace std;

int main()
{
	//ios::sync_with_stdio(0);cin.tie(0);
	int n , a , b ;
	cin >> n ;
	map<int, int> mp ;
	int ans = 0 , sum = 0 ;
	for (int i = 0 ; i < n ; i++) {
		cin >> a >> b ;
		mp[a]++;
		mp[b + 1]--;
	}
	for (auto &[a , b] : mp) {
		sum += b ;
		ans = max(ans , sum);
	}
	cout << ans << '\n';
}