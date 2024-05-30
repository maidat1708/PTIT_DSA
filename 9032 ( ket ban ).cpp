#include <bits/stdc++.h>
using namespace std;
int n,m,maxi;
int parent[100001],sz[100001];
int find (int u)
{
	if (u==parent[u]) return u;
	return parent[u]=find(parent[u]);
}
void Union(int x,int y)
{
	int a=find(x);
	int b=find(y);
	if (a==b) return;
	if (sz[a]<sz[b]) swap(a,b);
	parent[b]=a;
	sz[a]+=sz[b];
	maxi=max(maxi,sz[a]);	
}
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		maxi=0;
		cin >> n >> m;
		for(int i=1;i<=n;i++)
		{
			parent[i]=i;
			sz[i]=1;
		}
		for(int i=0;i<m;i++)
		{
			int x,y;cin >> x >> y;
			Union(x,y);
		}
		cout << maxi;
		cout << endl;
	}
}
