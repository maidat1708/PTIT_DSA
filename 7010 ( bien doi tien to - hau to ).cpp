#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t; cin >> t;
	while (t--)
	{
		stack<string> s;
		string x;
		cin >> x;
		for (int i=x.size()-1;i>=0;i--)
		{
			if (isalpha(x[i])) s.push(string(1,x[i]));
			else
			{
				string o1= s.top();s.pop();
				string o2= s.top();s.pop();
				string res =  o1 + o2 + x[i] ;
				s.push(res);
			}
		}
		cout << s.top() << endl;
	}
}
