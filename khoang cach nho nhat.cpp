#include<bits/stdc++.h>

using namespace std;
int n,k,ans;
int a[100],use[100];
string s[100];
void ktao()
{
	for (int i=1;i<=k;i++) a[i]=i;
}
void check()
{
	int minn=1e9,maxx=0;
	for (int i=1;i<=n;i++)
	{
		int x=0;
		for (int j=1;j<=k;j++)	x=x*10+(s[i][a[j]-1]-'0');
		maxx=max(maxx,x);
		minn=min(minn,x);
	}
	ans=min(maxx-minn,ans);
}
void Try (int i)
{
	for (int j=1;j<=k;j++)
	{
		if (!use[j])
		{
			use[j]=1;
			a[i]=j;
			if (i==k) check();
			else Try(i+1);
			use[j]=0;
		}
	}
}
int main()
{
	cin >> n>>k;
	ans=1e9;
	ktao();
	for (int i=1;i<=n;i++) cin>>s[i];
	memset(use,0,sizeof(use));
	Try(1);
	cout << ans;
	cout << endl;
}

