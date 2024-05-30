#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
int main()
{
	int t;cin>>t;
	while (t--)
	{
		int n;cin>>n;
		int a[n];
		long long s,maxx=0,sum=0;
		for (int i=0;i<n;i++) cin >> a[i];
		sort (a,a+n);
		for (int i=0;i<n;i++)
		{
			s=1ll*i*a[i];
			sum+=s%mod;
		}
		cout << sum%mod << " ";
		cout << endl;
	}
}
