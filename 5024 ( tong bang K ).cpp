#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,k,mod =1000000007;
	cin >> t;
	while(t--) {
		cin >> n>>k;
        int a[n];
        for (int i =0 ; i < n;++i) cin >> a[i];
        long long dp[k+1]={0};
		dp[0]=1;
        for (int i =1 ; i<k;++i)   for (int j =0 ;j <n;++j)  if (a[j]<=i) dp[i] = (dp[i]+dp[i-a[j]]) %mod;
        cout<<dp[k]<<endl;
	}
}
