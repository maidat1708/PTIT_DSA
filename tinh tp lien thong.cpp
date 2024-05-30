#include<bits/stdc++.h>
using namespace std;
int n,a[100][100];
bool chuaxet[100];
void DFS(int x)
{
	chuaxet[x]=false;
	for (int i=1;i<=n;i++)
		if (chuaxet[i]&&a[x][i]) DFS(i);
}

void Component ()
{
	int ans=0;
	memset(chuaxet,true,sizeof(chuaxet));
	for (int i=1;i<=n;i++)
	{
		if (chuaxet[i])
		{
			ans++;
			DFS(i);
		}
	}
	cout << ans << endl;
}

int main()
{
	cin>>n;
	for (int i=1;i<=n;i++) for (int j=1;j<=n;j++) cin >> a[i][j];
	Component();
}

