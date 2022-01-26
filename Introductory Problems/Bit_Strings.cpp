#include<bits/stdc++.h>
using namespace std;

int const mod = 1e9 + 7 ;

int main()
{
    //ios::sync_with_stdio(0);cin.tie(0);
    long long ans =1 , n ;
    cin >> n ;
    while(n--){
        ans =(ans*2)%mod ;
    }
    cout << ans << "\n";
}