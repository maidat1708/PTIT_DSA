#include<bits/stdc++.h>
using namespace std;
int f1[2]={1,0};
int f2[2]={0,1};
string a[10000];
int n,m;

void quaylui(int i,int j)
{
	a[i][j]='.';
	for (int k=0;k<2;k++)
	{
		int imoi=i+f1[k];
		int jmoi=j+f2[k];
		if (imoi>=0&&imoi<=n&&jmoi>=0&&jmoi<=m&&a[imoi][jmoi]=='#')
		{
			quaylui(imoi,jmoi);
		}
	}
}

int main ()
{
	int ans=0;
	cin >> n >> m;
	cin.ignore();
	for (int i=0;i<n;i++) cin >> a[i];
	for (int i=0;i<n;i++)
		for (int j=0;j<m;j++)
		{
			if (a[i][j]=='#')
			{
				ans++;
				quaylui(i,j);
			}
		}
//	for (int i=0;i<n;i++)
//	{
//		for (int j=0;j<m;j++) cout << a[i][j];
//		cout << endl;
//	}
	cout << ans << endl;
}
