#include<bits/stdc++.h>
using namespace std;

int a[100],n,k,ktra=0,b[100];
void nhap ()
{
	for (int i=1;i<=k;i++)
	{
		cin >> b[i];
		a[i]=b[i];
	}
}
void sinh()
{
	int i=k;
	while (i>=1&&a[i]==n-k+i) i--;
	if (i==0) ktra=1;
	else  
	{
		a[i]++;
		for (int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
	}
}
int check()
{
	int dem=0,l=1,r=1;
	for (int l=1;l<=k;l++)
	{
		if (b[r]==a[l])
		{
			dem++;
			r++;
		}
		else if (b[r]<a[l]) r++;
	}
	return k-dem;
}
int main()
{
	int t;cin >>t;
	while (t--)
	{
		cin >> n >> k;
		ktra=0;
		nhap();
		sinh();
		if (ktra==1) cout << k;
		else cout<<check();
		cout << endl;
	}
}

