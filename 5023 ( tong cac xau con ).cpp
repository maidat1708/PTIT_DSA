#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		long long n = s.size(),dp[n],val=0;
		dp[0] = s[0] - '0';
		val+=dp[0];
		for (int i = 1  ; i < n; ++i) {
			dp[i]= 10*dp[i-1] +(i+1)*(s[i]-'0');
			val+=dp[i];
		}
		cout<<val<<endl;
	}
}
