#include<bits/stdc++.h>
using namespace std;
int n,s,t,a[100][100];
bool chuaxet[100];
int truoc[100];
vector<int> path;
void DFS(int x)
{
	chuaxet[x]=false;
	for (int i=1;i<=n;i++)
		if (chuaxet[i]&&a[x][i])
		{
			truoc[i]=x;
			DFS(i);
		}
}

void BFS (int x)
{
	queue<int> p;
	p.push(x);
	chuaxet[x]=false;
	while(!p.empty())
	{
		int u=p.front();p.pop();
		for (int i=1;i<=n;i++)
		{
			if (chuaxet[i]&&a[u][i])
			{
				p.push(i);
				truoc[i]=u;
				chuaxet[i]=false;
			}
		}
	}
}

void find1(int s,int t)
{
	memset(chuaxet,true,sizeof(chuaxet));
	memset(truoc,0,sizeof(truoc));
	DFS(s);
	if (chuaxet[t]) cout << "no path\n";
	else
	{
		while (s!=t)
		{
			path.push_back(t);
			t=truoc[t];
		}
		path.push_back(s);
		cout << "DFS path: ";
		for (int x : path) cout << x <<" ";
		cout << endl;
	}
}

void find2(int s,int t)
{
	memset(chuaxet,true,sizeof(chuaxet));
	memset(truoc,0,sizeof(truoc));
	BFS(s);
	if (chuaxet[t]) return;
	else
	{
		while (s!=t)
		{
			path.push_back(t);
			t=truoc[t];
		}
		path.push_back(s);
		cout << "BFS path: ";
		for (int x : path) cout << x <<" ";
		cout << endl;
	}
}

int main()
{
	cin>>n;
	cin>>s>>t;
	for (int i=1;i<=n;i++) for (int j=1;j<=n;j++) cin >> a[i][j];
	find1(s,t);
	path.clear();
	find2(s,t);
}
