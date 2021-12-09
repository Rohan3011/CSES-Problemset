#include<bits/stdc++.h>
using namespace std;

int main()
{
	//ios::sync_with_stdio(0);cin.tie(0);
	int n , x ;
	cin >> n >> x ;
	vector<int> weight(n) ;
	for (auto &u : weight)
		cin >> u ;
	sort(weight.begin() , weight.end());
	int first = 0 , second = n - 1 , boats = 0;
	while (first <= second) {
		int totalWeight = weight[first] + weight[second] ;
		if (totalWeight <= x) {
			first++;
			second--;
			boats++;
		}
		else {
			second--;
			boats++;
		}
	}
	cout << boats << '\n';
}