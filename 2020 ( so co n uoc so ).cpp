#include<bits/stdc++.h>
using namespace std;
int t,n;
int prime[]={2,3,5,7,11,13,17,19,23,29,31,37};
long long ans ;
void sinh(int i,long long uoc,long long val) {
    if(uoc>n) return ; 
    if(uoc == n) ans = min (ans , val);
    for(int j = 1 ; ; ++j) {
        if(val*prime[i]>ans) break;
        val*=prime[i];
        sinh(i+1,uoc*(j+1),val);
    }
}
int main(){
    cin >> t;
    while(t--) {
        ans = 1e18;
        cin >> n;
        sinh(0,1,1);
        cout<<ans<<endl;
    }
}
