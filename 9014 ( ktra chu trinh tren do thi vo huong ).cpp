#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> adj[1001];
int parent[1001];
bool used[1001];
void inp()
{
	cin >> n >> m;
	int x,y;
	for (int i=0;i<m;i++)
	{
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(used,false,sizeof(used));
}

bool dfs(int u,int par)
{
	used[u]=true;
	for (int v : adj[u]) 
	{
		if (!used[v])
		{
			parent[v]=u;
			if (dfs(v,u)) return true;
		}
		else if ( v != parent[u]) return true;
	}
	return false;
}

void solve()
{
	for (int i=1;i<=n;i++)
	{
		if (!used[i])
		{
			if (dfs(i,0))
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
		memset(parent,0,sizeof(parent));
		inp();
		solve();
		cout << endl;
	}
}
