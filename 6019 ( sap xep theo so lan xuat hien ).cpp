#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin>>n;
		int a[n],max=0;
		map<int,int> mp;
		for (int &x:a)
		{
			cin>>x;
			mp[x]++;
		}
		for (auto x:mp)
		{
			if (max<x.second) max=x.second;
		}
		for (int i=max;i>=1;i--)
		{
			for (auto x:mp)
			{
				if (x.second==i)
				{
					for (int j=0;j<i;j++) cout << x.first << " ";
				}
			}
		}
		cout << endl;
	}
}



