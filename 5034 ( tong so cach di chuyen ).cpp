#include<bits/stdc++.h>
using namespace std;
long long mod=1000000007;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long i,n,j,k;
	    cin>>n>>k;
	    long long list[100005];
	    list[0]=1;
	    for(i=1;i<=k;++i) {
	    	list [i] =i==k? 0:1;
	    	for(j=0;j<i;++j) list[i]=(list[i]%mod+list[j]%mod)%mod;
		}
		if(n<=k+1) cout<<list[n-1] <<endl;
		else {
			for(i=k+1;i<n;++i)	{
				list[i]=0;
				for(j=i-k;j<i;++j) list[i] = (list[i]+list[j]) %mod;
			}
			cout<<list[n-1]<<endl;
		}
	}
}


