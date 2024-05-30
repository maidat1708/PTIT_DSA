#include <bits/stdc++.h>
using namespace std;
int dp[105][25005];
int main(){
	int  c , n, a[105], maxi =0 ;
	cin >> c>> n;
	memset(dp,0,sizeof(dp));
	for(int i =1 ;i<=n;++i) cin >> a[i] ;
	for(int i = 1 ;i<=n;++i) for(int j =1 ; j <= c ;++j) {
		dp[i][a[i]]= 1;
		if(a[i]>j) dp[i][j]= dp[i-1][j];
		else dp[i][j]= max(dp[i-1][j],dp[i-1][j-a[i]]);
		if(dp[i][j]) maxi = max (maxi,j);
	}
	cout<<maxi;
}
