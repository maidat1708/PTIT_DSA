#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,s;
    cin >> t;
    while(t--) {
        cin >> n>>s;
        int a[n], dp[40000]={0};
        for(int i =0 ;i<n;++i ) cin >> a[i];
        for(int i =0 ;i<n;++i) {
            dp[a[i]]=1;
            for(int j = s;j> a[i]; --j) if(dp[j-a[i]]) dp[j] =1;
            if(dp[s]) break;
        }
        if(dp[s]) cout<<"YES\n"; else cout<<"NO\n";
    }
}
