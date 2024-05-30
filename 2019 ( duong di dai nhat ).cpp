#include<bits/stdc++.h>
using namespace std;
int t,v,e,check[25][25],maxi,dem;
vector < int > ds[25];
void dfs(int u ) {
    for(auto x : ds[u]) if(!check[u][x]&&!check[x][u]) {
        check[u][x]= check[x][u]=1;
        ++dem;
        maxi = max (maxi,dem);
        dfs(x);
        check[u][x]= check[x][u]=0;
        --dem;
    }
}
void result(){
    for(int i =0 ;i<v;++i) {
        dem=0;
       memset(check,0,sizeof(check));
       dfs(i);
    }
    cout<<maxi<<endl;
}
int main(){
    cin >> t;
    while(t--) {
        memset(ds,0,sizeof(ds));
        maxi =0 ; dem=0;
        cin >> v>> e;
        for(int i =0 ;i<e;++i) {
            int x,y;
            cin >> x>>y;
            ds[x].push_back(y);
            ds[y].push_back(x);
        }
        result();
    }
}
