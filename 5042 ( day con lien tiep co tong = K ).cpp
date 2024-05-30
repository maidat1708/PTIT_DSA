#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n, k, check = 0, d = 0;
		cin >> n >> k;
		long long a[n], dp[n] = {0};
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		dp[0] = a[0];
		if (a[0] == k)
			cout << "YES\n";
		else
		{
			for (int i = 1; i < n; ++i)
			{
				dp[i] = dp[i - 1] + a[i];
				while (dp[i] > k && d < i)
					dp[i] -= a[d++];
				if (dp[i] == k)
				{
					check = 1;
					cout << "YES\n";
					break;
				}
			}
			if (!check)
				cout << "NO\n";
		}
	}
}
