#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> adj[1001];
int color[1001];
void inp()
{
	cin >> n >> m;
	int x,y;
	for (int i=0;i<m;i++)
	{
		cin >> x >> y;
		adj[x].push_back(y);
	}
	memset(color,0,sizeof(color));
}

bool dfs(int u)
{
	color[u]=1;
	for (int v : adj[u]) 
	{
		if (color[v]==0) 
		{
			if (dfs(v)) return true;
		}
		else if (color[v]==1) return true;
	}
	color[u]=2;
	return false;
}

void solve()
{
	for (int i=1;i<=n;i++)
	{
		if (color[i]==0)
		{
			if (dfs(i))
			{
				cout << "YES";
				return;
			}
		}
	}
	cout << "NO";
}
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		memset(adj,{},sizeof(adj));
		inp();
		solve();
		cout << endl;
	}
}
