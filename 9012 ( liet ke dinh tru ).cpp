#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> adj[1001];
bool used[1001];

void dfs(int u)
{
	used[u]=true;
	for(int v : adj[u]) if (!used[v]) dfs(v);
}

void dinhtru()
{
	int tplt=0;
	memset(used,false,sizeof(used));
	for (int i=1;i<=n;i++)
	{
		if(!used[i])
		{
			tplt++;
			dfs(i);
		}
	}
	for (int i=1;i<=n;i++)
	{
		memset(used,false,sizeof(used));
		used[i]=true;
		int dem=0;
		for (int j=1;j<=n;j++)
		{
			if(!used[j])
			{
				dem++;
				dfs(j);
			}
		}
		if (dem>tplt) cout << i << " ";
	}
	cout << endl;
}

int main() 
{
	int t;cin>>t;
	while (t--)
	{
		cin >> n >> m;
		for (int i=0;i<m;i++) 
		{
			int x,y;cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		dinhtru();
		for (int i=1;i<=n;i++) adj[i].clear();
	}
	return 0;
}
