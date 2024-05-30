#include<bits/stdc++.h>
using namespace std;
int priority(char c){
	if(c=='+'||c=='-') return 1;
	if(c=='*'||c=='/') return 2;
	if(c=='^') return 3;
	return -1;
}
int main(){
	int t;
	cin>>t;
	scanf("\n");
	while(t--){
		string s;
		getline(cin,s);
		stack<char> st;
		for(int i=0;i<s.size();++i){
			if(isalpha(s[i])) cout<<s[i];
			else if(s[i]=='(') st.push(s[i]) ;
			else if(s[i]==')'){
				while(!st.empty()&&st.top()!='('){
					cout<<st.top();
					st.pop();
				}
				if(st.top()=='(') st.pop();
			}
			else {
				while(!st.empty()&&priority(s[i])<=priority(st.top())){
					cout<<st.top();
					st.pop();
				}
				st.push(s[i]);
			}
		}
		while(!st.empty()){
			if(st.top()!='(') cout<<st.top();
			st.pop();
		}
		cout<<endl;
	}
}
