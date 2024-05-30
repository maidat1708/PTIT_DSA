#include<bits/stdc++.h>
using namespace std;
int t,n,v,dp[1005][1005]={0},a[1005],c[1005];
int result() {
	for (int i = 1;i <= n ;++i) for (int j =1;j <= v ; ++j) {
			dp[i][j] = dp[i-1][j];
			if (j>=a[i]) dp[i][j] = max ( dp[i][j], dp[i-1][j-a[i]]+c[i]);
	}
	return dp[n][v];
}
int main(){
	cin >> t;
	while(t--){
		cin >> n>> v;
		for (int i =1 ; i <= n; ++i) cin >> a[i];
		for (int i =1 ; i <= n; ++i) cin >> c[i];
		cout<<result()<<endl;
	}
}
