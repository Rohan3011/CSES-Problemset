#include <iostream>
#include <set>
using namespace std ;
int main()
{
	int n , x ;
	cin >> n ;
	set<int> distinct ;
	for (int i = 0 ; i < n ; i++) {
		cin >> x ;
		distinct.insert(x);
	}
	cout << distinct.size() << '\n';
	return 0;
}