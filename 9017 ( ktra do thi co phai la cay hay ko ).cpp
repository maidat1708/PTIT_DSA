#include <bits/stdc++.h>
using namespace std;
int V,E,check[1005];
vector < int > ds[1005];
void dfs(int u) {
	check[u]=1;                                          
	for(int x: ds[u]) if(check[x]==0) 	dfs(x);
}
void in(){
	for(int i=1;i<=V;++i) if(check[i]==0) {
		cout<<"NO\n";
		return;
	}
	cout<<"YES\n";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>V;
		memset(ds,{},sizeof(ds));
		memset(check,0,sizeof(check));
		for(int i =0 ;i<V-1;++i) {
			int x,y;
			cin>>x>>y;
			ds[x].push_back(y);
			ds[y].push_back(x);
		}
		dfs(1);
		in();
	}
}

