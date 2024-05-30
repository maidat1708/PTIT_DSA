#include<bits/stdc++.h>
using namespace std;
int a[20][20],check=0,n,m,ans;

void Try (int cot,int hang)
{
	if (cot==m&&hang==n) ans++;
	int cot_new=cot+1; // sang phai R
	int hang_new=hang+1; // di xg D
	if (hang_new<=n)
	{
		Try(cot,hang_new);
	}
	if (cot_new<=m)
	{
		Try(cot_new,hang);
	}
}
int main()
{
	int t;cin>>t;
	while (t--)
	{
		cin>>n>>m;
		for(int i=1;i<=n;i++) for (int j=1;j<=m;j++) cin >> a[i][j];
		Try(1,1);
		cout << ans;
		ans=0;
		cout << endl;
	}
}

