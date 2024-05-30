#include<bits/stdc++.h>
using namespace std;
int t,k,m,n,check[10][10];
vector < string > str,val;
char a[10][10];
string s;
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
void backtrack(int i,int j ) {
    s+=a[i][j];
    check[i][j]=1;
    for(int pos = 0 ;pos <str.size();++pos )    if(s==str[pos]) val.push_back(s);
    for(int pos = 0; pos <8;++pos ) {
        int i1= i+dx[pos];
        int j1 = j+dy[pos];
        if(i1>=1&&j1>=1&&i1<=m&&j1<=n&&!check[i1][j1])   backtrack(i1,j1);
    }
    check[i][j]=0;
    s.pop_back();
}
int main(){
    cin>>t;
    while(t--){
        cin >> k>>m>>n;
        s="";
        str.clear();
        val.clear();
        memset(check,0,sizeof(check)) ;
        for(int i=0;i<k;++i) {
            string x;
            cin >> x;
            str.push_back(x);
        }
        for(int i =1;i<=m;++i) for(int j =1;j<=n;++j) cin >> a[i][j];
        for(int i =1;i<=m;++i) for(int j =1;j<=n;++j) backtrack(i,j);
        
        if(!val.size()) cout<<-1;
        else for(auto x : val) cout<<x<<" ";
        cout<<endl;
    }
}
