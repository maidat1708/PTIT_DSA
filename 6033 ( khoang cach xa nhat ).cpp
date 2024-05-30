#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t; cin >>t;
	while (t--)
	{
		int n;cin>>n;
		int a[n],check=0;
		for (int i=0;i<n;i++) cin >> a[i];
		int len=n;
		while (len--)
		{
			for (int i=0;i<n-len;i++)
			{
				if (a[i]<a[i+len])
				{
					cout << len ;
					check=1;
					len=0;
					break;
				}
			}
		}
		if (check==0) cout << "-1";
		cout << endl;
	}
}
