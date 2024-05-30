#include<bits/stdc++.h>
using namespace std;
int n ,a[100];
void ktao()
{
	for (int i=2;i<=n-1;i++) a[i]=i;
	a[1]=1;
	a[n]=0;
}
void check ()
{
	for (int i=1;i<=n-3;i++) if (!a[i]&&!a[i+1]&&!a[i+2]&&!a[i+3]) return;
	for (int i=1;i<=n-1;i++) if (a[i]&&a[i+1]) return;
	for (int i=1;i<=n;i++)
	{
		if (a[i]) cout << "8";
		else cout << "6";
	}
	cout << endl;
}
void Try (int i)
{
	for(int j=0;j<=1;j++)
	{
		a[i]=j;
		if (i==n-1) check ();
		else Try(i+1);
	}
}
int main ()
{
	cin >> n;
	ktao();
	Try(2);
}
