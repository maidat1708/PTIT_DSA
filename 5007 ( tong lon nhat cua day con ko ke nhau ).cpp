#include<bits/stdc++.h>
using namespace std;
int t,n;
int main(){
	cin >> t;
	while(t--){
		cin >> n;
		int a[n];
		long long dp[n]= {0} ;
		for (int i =0 ; i < n; ++i) cin >> a[i];
		dp[0] = a[0]; 
		dp[1] = max(a[0],a[1]);
		for (int i = 2 ;i < n ;++i ) dp[i ] = max (dp[i-2]+a[i],dp[i-1]);
		cout<<dp[n-1]<<endl;
	}
}


