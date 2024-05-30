#include <bits/stdc++.h>
using namespace std;
int n,m;
bool daxet[1005];
vector<int> adj[1005];
int lienthong[1005],tplt=0;
void dfs1(int u) 
{
	daxet[u]=true;
	for(int v : adj[u]) 
		if(!daxet[v])
		{
			lienthong[v]=tplt;
			dfs1(v);
		}
}

int main ()
{
	int t,x,y;cin>>t;
	while (t--)
	{
		for (int i=1;i<=n;i++) adj[i].clear();
		tplt=0;
		cin >> n >> m;
		for (int i=0;i<m;i++)
		{
			cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		memset(daxet,false,sizeof(daxet));
		for (int i=1;i<=n;i++)
		{
			if (!daxet[i])
			{
				tplt++;
				lienthong[i]=tplt;
				dfs1(i);
			}
		}
		int k; cin>>k;
		while (k--)
		{
			int S,T;cin>>S>>T;
			if (lienthong[S]==lienthong[T]) cout << "YES";
			else cout << "NO";
			cout << endl;
		}
	}
}
