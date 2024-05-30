#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t; cin >> t;
	while (t--)
	{
		stack<int> s;
		string x;
		cin >> x;
		for (int i=0;i<x.size();i++)
		{
			if (isalnum(x[i])) s.push(x[i]-'0');
			else
			{
				int o2= s.top();s.pop();
				int o1= s.top();s.pop();
				int res;
				if (x[i]=='+') res= o1+o2;
				else if (x[i]=='-') res=o1-o2;
				else if (x[i]=='*') res=o1*o2;
				else res=o1/o2;
				s.push(res);
			}
		}
		cout << s.top() << endl;
	}
}
