#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s,i,j;
	cin>>n>>s;
	if(s==0||s>9*n||n==0) cout<<"-1 -1";
	else {
		int s1=s;
		for(i=1;i<=n;++i) {
			int check=(n-i)*9;
			int d=i==1? 1:0;
			while(s-d>check)	++d;
			s-=d;
			cout<<d;
		}
		cout<<" ";
		for(i=1;i<=n;++i) {
			int d=9;
			int check =0;
			while(s1-d<check)	--d;
			s1-=d;
			cout<<d;
		}
	}
}

