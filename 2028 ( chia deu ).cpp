#include<bits/stdc++.h>
using namespace std;
int n,k,a[20],s=0,dem=0,ans=0;
void sinh(int i ) {
    int sum=0;
    if(dem==k&&i==n) {
        ++ans;
        return ;
    }
    else for(int j=i;j<n;++j) { 
        sum+= a[j];
        if(sum == s) {
            ++dem;
            sinh(j+1);
            --dem;
        }
    }
}
int main(){
    cin >> n>> k; 
    for(int i =0 ;i<n;++i) {
        cin >> a[i];
        s+=a[i];
    }
    if(s%k!=0) cout<<0;
    else { 
        s/=k;
        sinh(0);
        cout<<ans;
    }
}
