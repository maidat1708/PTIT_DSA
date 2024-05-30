#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t; cin >>t;
	while (t--)
	{
		int n;cin>>n;
		int a[n],dt[n],dg[n],maxx=0;
		for (int i=0;i<n;i++)
		{
			cin >> a[i];
			dt[i]=dg[i]=1;
		}
		for (int i=1;i<n;i++) if (a[i]>a[i-1]) dt[i]=dt[i-1]+1;
		for (int i=n-2;i>=0;i--) if (a[i]>a[i+1]) dg[i]=dg[i+1] +1;
		for (int i=0;i<n;i++) maxx=max(maxx,dt[i]+dg[i]-1);
		cout << maxx;
 		cout << endl;
	}
}
