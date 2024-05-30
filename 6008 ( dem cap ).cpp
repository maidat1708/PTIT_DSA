#include<bits/stdc++.h> 
using namespace std;
int main(){
	int t,m,n;
	cin >> t;
	while(t--){
		cin >> m>>n;
		int a[m],b[n],dem0=0,dem1=0,dem=0,dem3=0,dem2=0;
		for(int i =0 ;i<m;++i) {
			cin >> a[i];
			if(a[i]==0) ++dem0; 
			if(a[i]==1) ++dem1;
			if(a[i]==3) ++dem3;
			if(a[i]==2) ++dem2;
		}
		for(int i =0 ;i<n;++i) cin >> b[i];
		sort(a,a+m);
		sort(b,b+n);
		for(int i =0;i<n;++i) {
			if(b[i]==0) dem+=m-dem0;
			else if(b[i]==1) dem+=m-dem0-dem1;
			else {
				if(b[i]==2) dem+=dem3;
				else {
					int val = lower_bound(a,a+m,b[i]) - a -dem0 - dem1; 
					dem+=val;
					if(b[i]==3||b[i]==4) dem-=dem2;
				}
			}
		}
		cout<<dem<<endl;
	}
}
