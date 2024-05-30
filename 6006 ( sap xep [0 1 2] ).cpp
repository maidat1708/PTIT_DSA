#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,n,a[1005];
	cin >> t;
	while (t--) {
		cin >> n;
		int dem=0;
		for(int i =0 ;i<n;++i) cin >> a[i];
		for(int i =0 ;i<n-1;++i) {
			int mini = i ;
			for(int j =i+1;j<n;++j) if(a[j]<a[mini]) mini = j ;
			if(mini!=i) {
				swap (a[i],a[mini]);
				++dem;
			}
		}
		cout<<dem<<endl;
	}
}
