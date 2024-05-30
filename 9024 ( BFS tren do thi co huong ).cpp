#include<bits/stdc++.h>
using namespace std;
int n,m,x;
bool chuaxet[10001];
vector < int > adj[10001];
void DFS (int x)
{
	queue<int> q;
	q.push(x);
	chuaxet[x]=false;
	while (!q.empty())
	{
		int u=q.front(); q.pop();
		cout << u <<" ";
		for (int s : adj[u])
		{
			if (chuaxet[s])
			q.push(s);
			chuaxet[s]=false;
		}
	}
}
int main()
{
	int t;cin>>t;
	while (t--)
	{
		memset(chuaxet,true,sizeof(chuaxet));
		cin>>n>>m>>x;
		for (int i=0;i<m;i++)
		{
			int x,y; cin>>x>>y;
			adj[x].push_back(y);
		}
		DFS(x);
		for (int i=0;i<m;i++) adj[i].clear();
		cout << endl;
	}
}



