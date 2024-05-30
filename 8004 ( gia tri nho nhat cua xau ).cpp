#include <bits/stdc++.h>
using namespace std;
int main(){
	long long t,k;
	cin>>t;
	while(t--){
		cin>>k;
		string s;
		cin >> s;
		long long a[256]={0};
		long long sum=0;
		//if(k>s.size()) k = s.size();
		for(int i =0 ;i<s.size();++i) a[s[i]]++;
		priority_queue<long long > q;
		for(int i =0 ;i<256;++i) if(a[i]>0) q.push(a[i]);
		while(k--) {
			long long x= q.top();
			x--;
			q.pop();
			q.push(x);
		}
		while(!q.empty()) {
			long long x= q.top();
			q.pop();
			sum+=x*x;
		}
		cout<<sum<<endl;
	}
}
