#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t; cin >>t;
	while (t--)
	{
		int n;cin >>n;
		int a[n];
		for (int &x:a) cin>>x;
		int ans=a[0]+a[1];
		for (int i=0;i<n-1;i++)
			for (int j=i+1;j<n;j++)
				if (abs(a[i]+a[j]) < abs(ans)) ans=a[i]+a[j];
		cout << ans << endl;
	}
}


