#include <bits/stdc++.h>
using namespace std;
long long bdn(long long n){
	queue < long long > st;
	long long dem=0;
	st.push(1);
	while(1){
		long long x= st.front();
		if(x>n) break; else ++dem;
		st.pop();
		st.push(10*x);
		st.push(10*x+1);
	}
	return dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<bdn(n)<<endl;
	}
}
