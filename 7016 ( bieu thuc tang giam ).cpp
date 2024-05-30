#include<bits/stdc++.h>
using namespace std;
void solution(string s)	{
	int k=0,i,n=s.size();
	stack<int> st;
	for(i=0;i<n;++i) {
		if(s[i]=='D'){
			st.push(++k);
			if(i==0||s[i-1]=='I') st.push(++k);
		}
		else {
			while(!st.empty()){
				cout<<st.top();
				st.pop();
			}
			if(i==0) cout<<++k;
			if(s[i+1]!='D') cout<<++k;
		}
	}
	while(!st.empty()){
		cout<<st.top();
		st.pop();
	}
	cout<<endl;
}
int main(){
	int T,i;
	cin>>T;
	for(i=1;i<=T;++i){
		string s;
		cin>>s;
		//cout<<"Test "<<i<<": ";
		solution(s);
	}
}

