#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m;
    cin >> t;
    while(t--) {
        cin >>m>>n;
        int a[m][n];
        for (int i =0 ;i < m;++i) for (int j =0 ;j < n;++j) cin >> a[i][j];
        long long dp[m][n];
        dp[0][0] =a[0][0];
        for (int i =1 ;i < m;++i) dp[i][0] = dp[i-1][0]+a[i][0];
        for (int i =1 ;i < n;++i) dp[0][i] = dp[0][i-1]+a[0][i];
        for (int i =1 ;i < m;++i) for (int j =1 ;j < n;++j) {
            dp[i][j] = INT_MAX;
            dp[i][j] = min(min(dp[i-1][j-1]+a[i][j],dp[i-1][j]+a[i][j]),dp[i][j-1]+a[i][j]);
        }
        cout<<dp[m-1][n-1]<<endl;
    }
}
