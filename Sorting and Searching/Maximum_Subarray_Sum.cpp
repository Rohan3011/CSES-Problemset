#include <iostream>
using namespace std ;

int main() {
	int n , x ;
	cin >> n ;
	long long ans = -1e9 , sum = 0 ;
	for (int i = 0 ; i < n ; i++) {
		cin >> x ;
		if (sum < 0)
			sum = 0 ;
		sum += x ;
		ans = max(sum , ans) ;
	}
	cout << ans << '\n';

	return 0 ;
}