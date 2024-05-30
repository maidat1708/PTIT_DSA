#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t; cin >>t;
	while (t--)
	{
		int n,s;
		cin >>n>>s;
		int a[n];
		map<int,int> mp;
		for (int &x:a)
		{
			cin >> x;
			mp[x]++;
		}
		int ans=0;
		for (int i=0;i<n;i++)
		{
			ans+=mp[s-a[i]];
			if (a[i]*2==s) ans--;
		}
		cout << ans/2 << endl;
	}
}

