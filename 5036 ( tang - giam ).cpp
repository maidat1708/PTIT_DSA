#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		float a[n], b[n];
		for (int i = 0; i < n; ++i)
			cin >> a[i] >> b[i];
		int dp[n], maxi = 1;
		for (int i = 0; i < n; ++i)
		{
			dp[i] = 1;
			for (int j = 0; j < i; ++j)
				if (a[i] > a[j] && b[i] < b[j])
					dp[i] = max(dp[i], dp[j] + 1);
			maxi = max(maxi, dp[i]);
		}
		cout << maxi << endl;
	}
}
