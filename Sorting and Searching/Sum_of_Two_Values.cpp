#include <iostream>
#include <map>
using namespace std ;

int main()
{
	int n , a , targetSum ;
	cin >> n >> targetSum ;
	int arr[n] ;
	for (auto &u : arr)
		cin >> u ;
	map<int, int> sum ;
	bool possible = false ;
	for (int i = 0 ; i < n ; i++) {
		auto itr = sum.find(targetSum - arr[i]) ;
		if (itr != sum.end()) {
			cout << itr->second << ' ' << i + 1 << '\n';
			possible = true;
			break ;
		}
		sum[arr[i]] = i + 1 ;
	}
	if (!possible)
		cout << "IMPOSSIBLE\n";

	return 0;
}