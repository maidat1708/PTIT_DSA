#include<bits/stdc++.h>
using namespace std;
long long ugly[1005];
void solve(){
    ugly[0] = 1;
    int i2 = 0 , i5=0,i3=0;
    for (int i = 1 ; i <1005;++i) {
        ugly[i] =min (min(ugly[i2]*2,ugly[i3]*3),ugly[i5]*5);
        if (ugly[i] == ugly[i2]*2) ++i2;
        if (ugly[i] == ugly[i3]*3) ++i3;
        if (ugly[i] == ugly[i5]*5) ++i5;
    }
}
int main(){
    int t,n;
    solve();
    cin >> t;
    while(t--) {
        cin >> n;
        cout<<ugly[n-1]<<endl;
    }
}
