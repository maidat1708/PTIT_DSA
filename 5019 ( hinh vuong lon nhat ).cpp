#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int m,n,maxi =0;
        cin >> m>>n;
        int dp[m+1][n+1],a[m+1][n+1];
        memset(dp,0,sizeof(dp));
        for(int i = 1 ; i <=m ;++i) for (int j = 1;j<=n;++j) cin >> a[i][j];
        for(int i = 1 ; i <=m ;++i) for (int j = 1;j<=n;++j) if (a[i][j]) {
            dp[i][j] = min(min(dp[i-1][j-1],dp[i][j-1]),dp[i-1][j])+1;
            maxi = max (maxi , dp[i][j]);
        }
        cout<<maxi<<endl;
    }
}
