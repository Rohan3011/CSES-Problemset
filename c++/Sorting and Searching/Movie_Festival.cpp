#include<bits/stdc++.h>
using namespace std;

int main()
{
	//ios::sync_with_stdio(0);cin.tie(0);
	int n , ans = 0 ;
	cin >> n ;
	vector<pair<int, int>> movie ;
	for (int i = 0 ; i < n ; i++) {
		int a , b ;
		cin >> a >> b ;
		movie.push_back({b , a});
	}
	sort(movie.begin() , movie.end());
	int prevMovie = 0 ;
	for (auto &[end , start] : movie) {
		if (start >= prevMovie) {
			ans++;
			prevMovie = end ;
		}
	}
	cout << ans << '\n';
}