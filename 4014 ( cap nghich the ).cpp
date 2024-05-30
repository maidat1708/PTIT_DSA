#include<bits/stdc++.h>
using namespace std;
long long t,n,a[1000005];
long long merge(int l,int r) {
	int mid = (l+r)/2;
	int L[mid-l+1] , R[r-mid],d=0;
	for(int i=l;i<=mid;++i) L[d++]=a[i];
	d=0;
	for(int i = mid +1;i<=r;++i) R[d++] = a[i];
	int k=l,i=0,j=0;
	long long kq=0;
	while(i<mid-l+1&&j<r-mid) {
		if(L[i]<=R[j]) a[k++]= L[i++];
		else {
			a[k++] = R[j++];
			kq+= mid - l +1 -i;
		}
	}
	while(i<mid-l+1) a[k++]= L[i++];
	while(j<r-mid) a[k++]=R[j++];
	return kq;
}
long long merge_sort(int l ,int r) {
	if(l>=r) return 0 ;
	int mid = (l+r)/2;
	long long kq = 0;
	kq+=merge_sort(l,mid);
	kq+=merge_sort(mid+1,r);
	kq+=merge(l,r);
	return kq;
}
int main(){
	cin >> t;
	while(t--){
		cin >> n;
		memset(a,0,sizeof(a));
		for(int i =0 ;i<n;++i) cin >> a[i];
		cout<<merge_sort(0,n-1)<<endl;
	}
}
