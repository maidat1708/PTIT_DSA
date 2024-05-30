#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	string s;
	while(t--){
		long long n,i,maximum=0;
		cin>>n;
		long long a[n];
		for(i=0;i<n;++i) cin>>a[i];
		stack < long long > st;
		i=0;
		while(i<n){
			while(!st.empty()&&a[i]<a[st.top()]) {
				long long x=st.top(); st.pop();
				long long y = st.empty()? 0: st.top()+1;
				maximum = max(maximum,a[x]*(i-y));
			}
			st.push(i);
			++i;
		}
		while(!st.empty()){
			long long x=st.top(); st.pop();
			long long y = st.empty()? 0: st.top()+1;
			maximum = max(maximum,a[x]*(n-y));
		}
		cout<<maximum<<endl;
	}
}
