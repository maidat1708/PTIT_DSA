#include<bits/stdc++.h> 
using namespace std;
int n,a[100],cnt,ok;
void kt()
{
	cnt=1;
	a[1]=n;
}
void sinh()
{
	int i=cnt;
	while (i>=1&&a[i]==1) i--;
	if (i==0) ok=0;
	else
	{
		a[i]--;
		int d=cnt-i+1;
		cnt=i;
		int q=d/a[i];
		int r=d%a[i];
		if (q)
		{
			for (int j=1;j<=q;j++)
			{
				cnt++;
				a[cnt]=a[i];
			}
		}
		if (r)
		{
			cnt++;
			a[cnt]=r;
		}
	}
}
int main()
{
	int t;cin>>t;
	while (t--)
	{
		cin>>n;
		kt();
		ok=1;
		while(ok)
		{
			cout << "(";
			for (int i=1;i<=cnt-1;i++) cout << a[i] <<" ";
			cout << a[cnt] << ") ";
			sinh();
		}
		cout << endl;
	}
}
