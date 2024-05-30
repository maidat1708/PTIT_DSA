#include<bits/stdc++.h>
using namespace std;
int main() {
   int t;
   cin >> t;
   while(t--) {
       string s;
       cin >> s;
       if (s[0]=='0') {
           cout <<0<<endl;
           continue;
       }
       int n= s.size(), dp[n+1]={0};
       dp[0]=1;
       dp[1]= 1;
       for (int i = 2; i <= n;++i) {
           dp[i]= 0;
           if (s[i-1]>'0') dp[i] =dp[i-1];
           int check = 10*(s[i-2] -'0') + s[i-1]-'0';
           if ( check >9 && check < 27 ) dp[i] +=dp[i-2];
       }
       cout<<dp[n]<<endl;
   }
}
