#include<bits/stdc++.h> 
using namespace std;
int n,k,s,a[16]={0},dem; 
void in(){
	int t=0;
	for(int i=1;i<=k;++i) t+=a[i];
	if(t==s) ++dem;
}
void xuly(int i){
	for(int j=a[i-1]+1;j<=i+n-k;++j) {
		a[i]=j;
		if(i==k) in();
		else xuly(i+1);
	}
}
int main(){
	while(1){
		cin>>n>>k>>s;
		dem=0;
		if(!n&&!k&&!s) break;
		xuly(1);
		cout<<dem<<endl;
	}
}
