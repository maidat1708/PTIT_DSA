#include <bits/stdc++.h>
using namespace std;
int n,m;
bool daxet[1005];
vector<int> adj[1005];
vector<pair<int,int>> dscanh;
void inp()
{
	int x,y;
	cin>>n>>m;
	for (int i=0;i<m;i++)
	{
		cin >> x >> y;
		if (x>y) swap(x,y);
		adj[x].push_back(y);
		adj[y].push_back(x);
		dscanh.push_back({x,y});
	}
	memset(daxet,false,sizeof(daxet));
}
void dfs1(int u) // tim tplt
{
	daxet[u]=true;
	for(int v : adj[u]) if(!daxet[v]) dfs1(v);
}
void dfs2(int u,int s,int t) // tim tplt sau khi bo canh
{
	daxet[u]=true;
	for (auto v: adj[u])
	{
		if (v==s&&u==t||v==t&&u==s) continue;
		if(!daxet[v]) dfs2(v,s,t);
	}
}

void canhcau()
{
	int tplt=0;
	memset(daxet,false,sizeof(daxet));
	for (int i=1;i<=n;i++)
	{
		if (!daxet[i])
		{
			tplt++;
			dfs1(i);
		}
	}
	for (auto it: dscanh)
	{
		int dem=0;
		memset(daxet,false,sizeof(daxet));
		int x=it.first,y=it.second;
		// loai bo canh (x,y) khoi do thi
		for (int i=1;i<=n;i++)
		{
			if(!daxet[i])
			{
				dem++;
				dfs2(i,x,y);
			}
		}
		if (dem>tplt)
		{
			cout << x << " " << y << " ";
		}
	}
	cout << endl;
}
int main ()
{
	int t;cin>>t;
	while (t--)
	{
		inp();
		canhcau();
		for (int i=1;i<=n;i++) adj[i].clear();
		dscanh.clear();
	}
}
