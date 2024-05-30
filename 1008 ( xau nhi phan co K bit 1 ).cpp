#include<bits/stdc++.h>
using namespace std;

int a[100],n,k,ktra=0;
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
	int sum=0;
	for (int i=1;i<=n;i++) if (a[i]==1) sum++;
	if (sum==k) return 1;
	return 0;
}
int main()
{
	int t;cin >> t;
	while (t--)
	{
		cin>>n>>k;
		ktra=0;
		nhap();
		while (ktra==0)
		{
			if (check(a))
			{
				for (int i=1;i<=n;i++) cout << a[i];
				cout << endl;
			}
			sinh();
		}
		cout << endl;
	}
}
