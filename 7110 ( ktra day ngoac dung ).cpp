#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t; cin >> t;
	while (t--)
	{
		stack<char>st;
		string s;
		cin>>s;
		int ok=1;
		for (int i=0;i<s.size();i++)
		{
			if (s[i]=='('||s[i]=='{'||s[i]=='[') st.push(s[i]);
			else
			{
				if (st.empty())
				{
					ok=0;
					break;
				}
				if (st.top()=='(' && s[i]==')') st.pop();
				else if (st.top()=='{'&&s[i]=='}') st.pop();
				else if (st.top()=='['&&s[i]==']') st.pop();
				else
				{
					ok=0;
					break;
				}
			}
			if (!ok) break;
		}
		if (ok) cout << "YES";else cout << "NO";
		cout << endl;
	}
}
