#include<bits/stdc++.h>
using namespace std;
int t,n;
int main(){
	cin>>t; 
	while(t--){
		cin >> n;
		int a[n];
		long long dp[n]={0},maxi =0 ;
		for (int i =0 ;i<n;++i ) cin >> a[i];
		for (int i =0 ; i<n;++i) {
			dp[i] = a[i];
			for (int j =0 ; j < i ;++j) if (a[i] > a[j]) dp[i] = max(dp[i],dp[j]+a[i]);
			maxi = max (maxi , dp[i]);
		}
		cout<<maxi<<endl;
	}
}

