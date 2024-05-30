#include<bits/stdc++.h>
using namespace std;
int n,t,dp[10005],i,j;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(i=1;i<=n;++i) {
			dp[i]=i;
			for(j=1;j<=sqrt(i);++j) dp[i]=min(dp[i],dp[i-j*j]+1);
		}
		cout<<dp[n]<<endl;
	}
}
