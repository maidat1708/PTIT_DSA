#include<bits/stdc++.h>
using namespace std;

int a[100],n,ktra=0;
void nhap()
{
	for (int i=1;i<=n;i++) a[i]=0;
}

void sinh()
{
	int i=n;
	while (i>=1&&a[i]==1) 
	{
		a[i]=0;
		i--;
	}
	if (i==0)
	{
		ktra=1;
	}
	else  
	{
		a[i]=1;
	}
}
int check (int a[])
{
	if (a[1]!=1||a[n]!=0) return 0;
	for (int i=1;i<=n-1;i++) if (a[i]==1&&a[i+1]==1) return 0;
	return 1;
}
int main()
{
	int t;cin >> t;
	while (t--)
	{
		cin>>n;
		ktra=0;
		nhap();
		while (ktra==0)
		{
			if (check(a))
			{
				for (int i=1;i<=n;i++) if (a[i]==1) cout << "H"; else cout <<"A";
				cout << endl;
			}
			sinh();
		}
		cout << endl;
	}
}

