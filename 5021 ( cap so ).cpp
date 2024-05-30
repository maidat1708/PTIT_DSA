#include <bits/stdc++.h>
using namespace std;
int cmp(pair<int, int> a, pair<int, int> b)
{
	return a.second < b.second;
}
int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		vector<pair<int, int>> v;
		for (int i = 0; i < n; ++i)
		{
			int x, y;
			cin >> x >> y;
			v.push_back({x, y});
		}
		sort(v.begin(), v.end(), cmp);
		int maxi = 1, x = v[0].second;
		for (int i = 1; i < n; ++i)
		{
			if (v[i].first > x)
			{
				++maxi;
				x = v[i].second;
			}
		}
		cout << maxi << endl;
	}
}
