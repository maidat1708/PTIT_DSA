#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		long long a[n],b[m],c[k];
		set<long long > s;
		for (long long &x:a) cin >> x;
		for (long long &x:b) cin >> x;
		for (long long &x:c) cin >> x;
		int x=0,y=0,z=0;
		while (x<n&&y<m&&z<k)
		{
			if (a[x]==b[y]&&b[y]==c[z])
			{
				s.insert(a[x]);
				x++;y++;z++;
			}
			else if (a[x]<b[y]||a[x]<c[z]) x++;
			else if (b[y]<a[x]||b[y]<c[z]) y++;
			else z++;
		}
		if (s.size()==0) cout << "-1";
		else for (auto &x : s) cout << x << " ";
		cout << endl;
	}
}
