#include<bits/stdc++.h>
using namespace std;
int a[2000],n,k,pos=0,val[2000];
void sinh(int i ){
    for(int j=1;j<=n;++j) if(j>pos) {
        pos=j;
        val[i]=a[j];
        if(i==k) {
            for(int h=1;h<=k;++h)  cout<<val[h]<<" ";
            cout<<endl;
        }
        else sinh(i+1);
        pos = 0 ;
    }
}
int main(){
    set<int> se;
    cin >> n>> k;
    for(int i=1;i<=n;++i) {
        int x;
        cin >> x;
        se.insert(x);
    }
    n=1;
    for(auto x : se) a[n++]=x;
    --n;
    sinh(1);
}

