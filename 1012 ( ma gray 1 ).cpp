#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin >>t;
	while (t--)
	{
		int n,k=1;
		cin >> n;
		for (int i=1;i<=n;i++) k*=2;
		string a[k+5];
		a[1]="0";
		a[2]="1";
		if (n>1)
		{
			int t=2;
			for (int i=2;i<=n;i++)
			{
				int l=1;
				for (int j=1;j<=i;j++) l*=2; 
				for (int j=1;j<=t;j++)
				{
					a[l-j+1]="1"+a[j];
					a[j]="0"+a[j];
				}
				t=l;
			}
		}
		for (int i=1;i<=k;i++) cout << a[i] <<" ";
		cout << endl;
	}
}
