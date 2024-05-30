#include <bits/stdc++.h>
using namespace std;
void bdn(long long n){
	queue < long long > st;
	long long dem=0;
	st.push(1);
	while(1){
		long long x= st.front();
		if(x%n==0)
		{
			cout << x;
			break;
		}
		st.pop();
		st.push(10*x);
		st.push(10*x+1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		bdn(n);
		cout<<endl;
	}
}
