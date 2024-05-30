#include<bits/stdc++.h>
using namespace std;
long long t,n;
string s;
char find(long long k , long long pos  ) {
    if(k<=s.size()) return s[k-1];
    if(k<=pos/2) return find(k,pos/2); 
    if(k-1-pos/2==0) return find(pos/2,pos/2);
    return find(k-1-pos/2,pos/2);
}
int main(){
    cin >> t;
    while(t--) {
        cin >>s>>n;
        long long len = s.size();
        while(len<n) len*=2;
        cout<<find(n,len)<<endl;
    }
}
