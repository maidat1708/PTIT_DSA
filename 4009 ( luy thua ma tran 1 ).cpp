#include <bits/stdc++.h>
using namespace std;
long long mod=1000000007,n;
void nhanmatran(long long a[10][10],long long b[10][10]) {
	long long c[10][10],i,j,k;
	for(i=0;i<n;++i) for(j=0;j<n;++j) {
		c[i][j]=0;
		for(k=0;k<n;++k) {
			c[i][j]+=a[i][k]*b[k][j]%mod;
			c[i][j]%=mod;
		}
	}
	for(i=0;i<n;++i) for(j=0;j<n;++j) a[i][j]= c[i][j];
}
void powmod(long long a[10][10],long long k,long long c[10][10]) {
	if(k==0||k==1) return ;
	powmod(a,k/2,c);
	nhanmatran(a,a);
	if(k%2!=0) nhanmatran(a,c);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long k,i,j;
		cin>>n>>k;
		long long a[10][10],c[10][10];
		for(i=0;i<n;++i) for(j=0;j<n;++j) {
			cin>>a[i][j];
			c[i][j]=a[i][j];
		}
	    powmod(a,k,c);
		for(i=0;i<n;++i) {
			for(j=0;j<n;++j) cout<<a[i][j]<<" ";
			cout<<endl;
		}
	}
}

