#include<bits/stdc++.h>
using namespace std;
int dp [105][105][105],t,a,b,c;
int main(){
	cin>>t; 
	while(t--){
		string s1,s2,s3;
		cin >> a>>b>>c>>s1>>s2>>s3;
		memset(dp,0,sizeof(dp));
		for (int i = 1 ; i <= a ;++i) for (int j =1 ;j<=b;++j) for (int k = 1 ;k <=c ;++k) {
			if (s1[i-1]==s2[j-1]&&s1[i-1]==s3[k-1]) dp[i][j][k] = dp[i-1][j-1][k-1] +1;
			else dp[i][j][k]= max (max(dp[i-1][j][k],dp[i][j-1][k]),dp[i][j][k-1]);
		}
		cout<<dp[a][b][c]<<endl;
	}
}

