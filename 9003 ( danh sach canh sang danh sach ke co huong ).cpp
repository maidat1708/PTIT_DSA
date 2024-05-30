#include<bits/stdc++.h>
using namespace std;
int n,m,a[100][100];
int main()
{
	int t;cin>>t;
	while (t--)
	{
		vector < int > adj[1001];
		cin>>n>>m;
		for (int i=0;i<m;i++)
		{
			int x,y; cin>>x>>y;
			adj[x].push_back(y);
		}
		for (int i=1;i<=n;i++)
		{
			cout << i << ": ";
			for (int j=0;j<adj[i].size();j++) cout << adj[i][j] << " ";
			cout << endl;
		}
	}
}



