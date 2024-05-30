#include<bits/stdc++.h>
using namespace std;

int a[100],n,ktra,b[100][100],sum=0,ans=INT_MAX,use[100]={0},bmin=INT_MAX;
void sinh(int i)
{
	if(sum+bmin*(n-i+96)>ans) return;
	for (int j=2;j<=n;j++)
	{
		if (!use[j])
		{
			use[j]=1;
			a[i]=j;
			sum+=b[a[i-1]][a[i]];
			if(i==n) ans=min(ans,sum+b[a[i]][1])
			else sinh(i+1);
			sum-=b[a[i-1]][a[i]];
			use[j]=0;
		}
	}
}
int main()
{
		cin >> n;
		for (int i=1;i<=n;i++) for (int j=1;j<=n;j++)
		{
			cin >> b[i][j];
			bmin=min(bmin,b[i][j]);
		}
		a[1]=1;
		sinh(2);
		cout << ans;
		cout << endl;
}

