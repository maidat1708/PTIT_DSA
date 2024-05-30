#include<bits/stdc++.h>
using namespace std;

bool used[1e5];
vector<int> adj[1e5],radj[1e5];
stack<int> s;
int n,m;
void inp()
{
	cin >> n >> m;
	int x,y;
	for (int i=0;i<m;i++)
	{
		cin >> x >> y;
		adj[x].push_back(y);
		radj[y].push_back(x);
	}
	memset(used,false,sizeof(used));
}

void dfs1(int u)
{
	used[u]=true;
	for (int v : adj[u])
	{
		if (!used[v]) dfs1(v);
	}
	s.push(u);
}

void dfs2(int u)
{
	used[u]=true;
	for (int v : radj[u])
	{
		if (!used[v]) dfs2(v);
	}
}

void run()
{
	int dem=0;
	for (int i=1;i<=n;i++)
	{
		if (!used[i]) dfs1(i);
	}
	memset(used,false,sizeof(used));
	while (!s.empty())
	{
		int top=s.top();
		s.pop();
		if (!used[top])
		{
			dfs2(top);
			dem++;
		}
	}
	if (dem==1) cout << "YES\n";
	else cout << "NO" << " " << dem << endl;
}
int main ()
{
	int t;
	cin >> t;
	while (t--);
	{
		inp();
		run();
		for (int i=1;i<=n;i++)
		{
			adj[i].clear();
			radj[i].clear();
		}
	}
}
