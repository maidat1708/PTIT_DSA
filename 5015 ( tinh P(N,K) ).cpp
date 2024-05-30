#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,i,k,s=1;
		cin>>n>>k;
		if(k>n) cout<<"0\n";
		else {
			for(i=n-k+1;i<=n;++i) s=(s*i)%mod;
			cout<<s<<endl;
		}
	}
}


