#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--) {
		scanf ("\n");
		string s;
		getline(cin,s);
		stack < char> st;
		for(int  i = 0 ; i < s.size();++i)
		{
			if (s[i]==' ')
			{
				s.erase(i,1);
			}
		}
		for(int  i = 0 ; i < s.size();++i) {
			if (s[i]==' ') continue;
			if(s[i]=='('&&s[i-1]=='-'&&s[i+2]!=')') 
			{
				cout << "(";
				st.push(s[i]);
			}
			else if (s[i]==')')
			{
				if (!st.empty()&&st.top()=='(')
				{
					cout << ")";
					st.pop();
				}
			}
			else if (s[i]!='('&&s[i]!=')') cout << s[i];
		}
		cout << endl;
	}
}
