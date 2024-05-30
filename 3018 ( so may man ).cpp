#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a,b,i,minimum=INT_MAX,check=0;
		string s;
		cin>>n;
		for(i=0;i<=n/7;++i) {
			int k=(n-7*i)/4;
			if((n-7*i)%4==0&&k+i<minimum) {
				a=k;
				b=i;
				check=1;
			}
		}
		if(check==0) cout<<"-1\n";
		else {
			for(i=0;i<a;++i) s+="4";
			for(i=0;i<b;++i) s+="7";
			cout<<s<<endl;
		}
	}
}
