#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t; cin>>t;
	while (t--)
	{
		long long n,s; cin>>n>>s;
		long long a[n];
		long long ans=0;
		for (int i=0;i<n;i++) cin >> a[i];
		sort(a,a+n);
		for (int i=0;i<n-1;i++)
		{
			for (int j=i+1;j<n;j++)
			{
				auto it=lower_bound(a+j+1,a+n,0ll+s-a[j]-a[i]);
				ans+=0ll+(it-a)-1-j;
			}
		}
		cout << ans << endl;
	}
}


