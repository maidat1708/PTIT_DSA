#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int n= s.size(), dp[n][n],maxi = 1;
		memset(dp,0,sizeof(dp));
		for (int i =0 ; i < n; ++i) dp[i][i] =1;
		for (int i = n-1; i>=0;--i) for (int j = i+1;j<n;++j) {
			if (s[i]==s[j]) {
				if (j==i+1) dp[i][j]=1;
				else dp[i][j] = dp [i+1][j-1];
			}
			if (dp[i][j]) maxi = max (maxi , j-i+1);
		}
		cout <<maxi<<endl;
	}
}
