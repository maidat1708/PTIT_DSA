#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[505][505];
int f1[8]={-1,-1,-1,0,0,1,1,1};
int f2[8]={-1,0,1,-1,1,-1,0,1};

void dfs(int i, int j)
{
	a[i][j]=0;
	for (int k=0;k<8;k++)
	{
		int imoi=i+f1[k];
		int jmoi=j+f2[k];
		if (imoi>=0&&imoi<n&&jmoi>=0&&jmoi<m&&a[imoi][jmoi]==1) dfs(imoi,jmoi);
	}
}

int main() {
	int t;cin>>t;
	while (t--)
	{
		cin >> n >> m;
		int cnt=0;
		for (int i=0;i<n;i++) for (int j=0;j<m;j++) cin >> a[i][j];
		for (int i=0;i<n;i++)
			for (int j=0;j<m;j++)
				if (a[i][j]==1)
				{
					cnt++;
					dfs(i,j);
				}
		cout << cnt << endl;		
	}
	return 0;
}
