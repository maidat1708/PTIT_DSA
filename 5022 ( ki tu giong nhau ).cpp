#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,x,y,z;
    cin >> t;
    while(t--){
        cin >> n>>x>>y>>z;
        int dp[105]={0};
        dp[1]=x;
        for (int i =2 ;i<=n;++i) {
            if(i%2==0) dp[i]=min(dp[i-1]+x,dp[i/2]+z);
            else dp[i]=min(dp[i-1]+x,dp[(i+1)/2]+z+y);
        }
        cout<<dp[n]<<endl;
    }
}
