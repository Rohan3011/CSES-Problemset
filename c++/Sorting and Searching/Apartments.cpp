#include<bits/stdc++.h>
using namespace std;

int main()
{
	//ios::sync_with_stdio(0);cin.tie(0);
	int n , m , k ;
	cin >> n >> m >> k ;
	vector<int> applicant(n)  , apartment(m);
	for (auto &u : applicant)
		cin >> u ;
	for (auto &u : apartment)
		cin >> u ;
	sort(applicant.begin(), applicant.end());
	sort(apartment.begin(), apartment.end());
	int a = 0 , b = 0 , ans = 0 ;
	while (a < n && b < m) {
		int diff = applicant[a] - apartment[b];
		if (abs(diff) <= k) {
			ans++;
			a++;
			b++;
		}
		else if (diff > 0)
			b++;
		else
			a++;
	}
	cout << ans << '\n';
}