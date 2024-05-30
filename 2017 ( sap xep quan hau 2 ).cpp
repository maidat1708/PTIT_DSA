#include<bits/stdc++.h>
using namespace std;
int n=8,a[100][100],x[10]={0} ,uset[100]={0},usex[100]={0},usec[100]={0},ans=0,sum=0;
void check()
{
	for (int i=1;i<=n;i++)
	{
		sum+=a[i][x[i]];
	}
	ans=max(sum,ans);
	sum=0;
}
void Try (int i)
{
	for (int j=1;j<=n;j++)
	{
		if (usec[j]==0&&usex[i+j-1]==0&&uset[i-j+n]==0)
		{
			x[i]=j;
			usec[j]=usex[i+j-1]=uset[i-j+n]=1;
			if (i==n)
			{
				check();
			}
			else Try(i+1);
			//backtrack
			usec[j]=usex[i+j-1]=uset[i-j+n]=0;
		}
	}
}
void nhap ()
{
	for (int i=1;i<=8;i++)
		for (int j=1;j<=8;j++) cin >>a[i][j];
}
int main ()
{
	int t;cin >> t;
	while (t--)
	{
		nhap();
		Try(1);
		cout << ans;
		ans=0;
		cout << endl;
	}
}
