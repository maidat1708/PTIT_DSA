#include<bits/stdc++.h>
using namespace std;
long long b[10][10],k,t,n,mod=1000000007;
void nhanmatran(long long a[10][10],long long b[10][10]) {
	long long c[10][10]={0};
	for(int i = 0 ;i< n ; ++i) for(int j = 0 ; j < n;++j) {
			c[i][j]= 0;
			for(int h=0;h<n;++h) c[i][j]= (c[i][j] + a[i][h]*b[h][j]) %mod;
		}
	for(int i = 0 ;i<n;++i) for(int j =0 ;j<n;++j) a[i][j]= c[i][j];
}
void powmod(long long a[10][10], long long x) {
	if(x<=1) return;
	powmod(a,x/2);
	nhanmatran(a,a);
	if(x%2!=0) nhanmatran(a,b);
}
int main(){
	cin >> t;
	while(t--) {
		cin >> n>>k;
		long long a[10][10];
		for(int i  = 0; i < n;++i) for(int j = 0 ; j<n;++j) {
			cin >> a[i][j];
			b[i][j]= a[i][j];
		}
		powmod(a,k);
		long long sum=0;
		for(int j =0 ;j<n;++j) sum=(sum+a[j][n-1]) %mod;
		cout<<sum<<endl;
	}
}
