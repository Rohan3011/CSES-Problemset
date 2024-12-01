#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update> ;
template <typename T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update> ;


void solve() {
	int n ,  k ;
	cin >> n >> k ;
	int arr[n] ;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	ordered_multiset<ll> st ;

	auto getMedian = [&]()->int{
		if(k & 1)
			return *st.find_by_order(k/2) ;
	};

	for (int i = 0 ; i < k ; i++)
		st.insert(arr[i]);
	ll median = *st.find_by_order((k + 1) / 2 - 1);
	ll prev_median = median ;
	ll cost = 0 ;
	for (int i = 0 ; i < k ; i++)
		cost += abs(arr[i] - median);
	cout << cost << " ";
	for (int i = k ; i < n ; i++) {
		st.erase(st.find_by_order(st.order_of_key(arr[i - k])));
		st.insert(arr[i]);
		median = *st.find_by_order((k + 1) / 2 - 1);
		cost += abs(median - arr[i]) - abs(prev_median - arr[i - k]);
		if (k % 2 == 0) cost -= abs( prev_median - median) ;
		prev_median = median;
		cout << cost << " ";
	}
}




int main()
{
	//ios::sync_with_stdio(0);cin.tie(0);
	solve();
}