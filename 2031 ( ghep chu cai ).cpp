#include<bits/stdc++.h>
using namespace std;
int n,a[100],use[100]={0};
void check()
{
	for (int i=2;i<=n-1;i++)
	{
		if (a[i-1]!=1&&a[i-1]!=5)
			if (a[i]==1||a[i]==5)
				if (a[i+1]!=1&&a[i+1]!=5) return;
	}
	for (int i=1;i<=n;i++) cout << char(64+a[i]);
	cout << endl;
}
void Try(int i)
{
	for (int j=1;j<=n;j++)
	{
		if (!use[j])
		{
			use[j]=1;
			a[i]=j;
			if (i==n) check();
			else Try(i+1);
			use[j]=0;
		}
	}
}
int main()
{
	char x;
	cin>>x;
	n=x-'A'+1;
	Try(1);
}
