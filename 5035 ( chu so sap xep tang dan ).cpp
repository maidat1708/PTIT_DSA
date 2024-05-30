#include <bits/stdc++.h>
using namespace std;
long long mod = 1000000007, dp[105][10], t, n;
int main(){
	cin >> t;
	while (t--){
		memset(dp, 0, sizeof(dp));
		cin >> n;
		for (int i = 0; i <= 9; ++i)	dp[1][i] = 1;
		for (int i = 2; i <= n; ++i)
			for (int j = 0; j <= 9; ++j)
				for (int k = 0; k <= j; ++k)
					dp[i][j] = (dp[i][j] + dp[i - 1][k]) % mod;
		long long sum = 0;
		for (int i = 0; i <= 9; ++i)sum = (sum + dp[n][i]) % mod;
		cout << sum << endl;
	}
}
