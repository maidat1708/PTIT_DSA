#include<iostream>
#include<map>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--) {
        string a,b;
        cin >> a>>b;
        int m = a.size(), n = b.size();
        int dp[m+1][n+1];
        memset(dp,0,sizeof(dp));
        for (int i =0 ;i <=m;++i) dp[i][0]= i;
        for (int i =0 ;i <=n;++i) dp[0][i]= i;
        for (int i = 1 ;i<=m;++i) for (int j = 1 ; j <=n;++j) {
            if (a[i-1]==b[j-1]) dp[i][j]= dp[i-1][j-1];
            else dp[i][j]=min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]))+1;
        }
        cout<<dp[m][n]<<endl;
    }
}
