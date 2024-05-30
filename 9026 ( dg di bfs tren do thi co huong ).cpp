#include <bits/stdc++.h>
using namespace std;
int n,m,s,t;
bool daxet[1005];
vector<int> adj[1005];
int truoc[1005];
void inp()
{
	int x,y;
	cin>>n>>m >> s >> t;
	for (int i=0;i<m;i++)
	{
		cin >> x >> y;
		adj[x].push_back(y);
		//adj[y].push_back(x);
	}
	memset(daxet,false,sizeof(daxet));
}
void bfs1(int u) 
{
	queue<int> q;
	q.push(u);
	daxet[u]=true;
	while (!q.empty())
	{
		int top=q.front(); q.pop();
		for (int v : adj[top])
		{
			if (!daxet[v])
			{
				truoc[v]=top;
				daxet[v]=true;
				q.push(v);
			}
		}
	}
}

int main ()
{
	int k;cin>>k;
	while (k--)
	{
		for (int i=1;i<=n;i++) adj[i].clear();
		vector<int> path;
		inp();
		memset(truoc,0,sizeof(truoc));
		bfs1(s);
		if(!daxet[t])
		{
			cout << "-1\n";
		}
		else
		{
			while (t!=s)
			{
				path.push_back(t);
				t=truoc[t];
			}
			path.push_back(s);
			reverse(path.begin(),path.end());
			for (int x : path) cout << x << " ";
			cout << endl;
		}
	}
}
