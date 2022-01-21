#include<bits/stdc++.h>
using namespace std;

void sumOfThree() {
	int n , sum ;
	cin >> n >> sum ;
	vector<pair<int, int>> arr ;
	for (int i = 0 ; i < n ; i++) {
		int x ;
		cin >> x ;
		arr.push_back({x , i + 1});
	}

	sort(arr.begin(), arr.end());
	for (int i = 0 ; i < n ; i++) {
		int reqSum = sum - arr[i].first ;
		int l = i + 1 , r = n - 1;
		while (l < r) {
			int currSum = arr[l].first + arr[r].first ;
			if (currSum == reqSum) {
				cout << arr[i].second << " " << arr[l].second << " " << arr[r].second << "\n";
				return ;
			}
			if (currSum > reqSum)
				r--;
			else
				l++;
		}
	}
	cout << "IMPOSSIBLE\n";
}


int main()
{
	ios::sync_with_stdio(0); cin.tie(0);

	sumOfThree();
}