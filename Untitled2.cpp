#include<bits/stdc++.h>
using namespace std;

int main ()
{
	int t;cin >> t;
	while (t--)
	{
		int maxx=0;
		scanf ("\n");
		string s;
		getline(cin,s);
		stack<char> st;
		for (int i=0;i<s.size();i++)
		{
			if (s[i]=='(') st.push(s[i]);
			else if (s[i]==')'&&!st.empty())
			{
				int k=st.size();
				maxx=max(maxx,k);
				st.pop();
			}
		}
		if (st.empty()) cout << maxx  << endl;
		else cout << "-1\n"; 
	}
}
