#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	long long  n,j,i,maximum=0;
    cin>>n;
    long long a[n],list[n];
    for(i=0;i<n;++i) cin>>a[i];
    list[0]=a[0];
    list[1]=max(a[0],a[1]);
    for(i=2;i<n;++i) {
    	list[i]=max(a[i]+list[i-2],list[i-1]);
		maximum=max(maximum,list[i]);
	}
	cout<<maximum<<endl;
	}
}
