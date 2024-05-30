#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin >> n;
		int a[n],b[n];
		for (int i =0 ; i < n;++i) cin >> a[i];
		reverse(a,a+n);
		stack <int> st;
		for (int  i  =n-1;i>=0;--i) {
			while(!st.empty()&&a[st.top()]<=a[i]) st.pop();
			if(st.empty()) b[i] =n-i;
			else b[i] = st.top()-i;
			st.push(i);
		}
		for (int i =n-1;i>=0;--i) cout << b[i]<<" ";
		cout << endl;
	}
}
