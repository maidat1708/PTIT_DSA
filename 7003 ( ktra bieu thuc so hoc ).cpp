#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t; cin >> t;
	while (t--)
	{
		scanf("\n");
		stack<char> s;
		string x;
		getline(cin,x);
		int ok=0;
		for (int i=0;i<x.size();i++)
		{
			if (x[i]=='(') s.push(i);
			if (x[i]==')')
			{
				if (i-s.top()==2)
				{
					ok=1;
					break;
				}
				if (x[i-1]==')'&&x[s.top()-1]=='(')
				{
					ok=1;
					break;
				}
			}
		}
		if (ok) cout<< "Yes";else cout << "No";
		cout <<endl;
	}
}
