#include<bits/stdc++.h>
using namespace std;

int nearestPrice(multiset<int>&ticket , int cost) {
	auto it = ticket.lower_bound(cost) ;
	if (*it == cost) {
		ticket.erase(it);
		return *it ;
	}
	else if (it != ticket.begin()) {
		it--;
		ticket.erase(it);
		return *it ;
	}
	return -1 ;
}



int main()
{
	//ios::sync_with_stdio(0);cin.tie(0);
	int n , m , x ;
	cin >> n >> m ;
	multiset<int> ticket ;
	for (int i = 0 ; i < n ; i++) {
		cin >> x ;
		ticket.insert(x);
	}
	for (int  i = 0 ; i < m ; i++) {
		cin >> x ;
		cout << nearestPrice(ticket , x) << '\n';
	}
}