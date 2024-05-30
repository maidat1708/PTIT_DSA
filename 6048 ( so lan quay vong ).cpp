#include<bits/stdc++.h>
using namespace std;

int main ()
{
	int t;cin>>t;
	while (t--)
	{
		int n,k;cin>>n;
		long long a[n],b[n];
		for (int i=0;i<n;i++)
		{
			cin >> a[i];
			b[i]=a[i];
		}
		sort(b,b+n);
		for (int i=0;i<n;i++) if (a[i]==b[0]) k=i;
		cout << k << endl;
	}
}

