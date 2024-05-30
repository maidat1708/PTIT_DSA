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
		s.push(-1);
		int maxi=0;
		for (int i=0;i<x.size();i++) 
		{
			if (x[i]=='(') s.push(i); // ())()()()()
			else
			{
				s.pop();
				if (!s.empty()) maxi= max (maxi,i-s.top());
				else s.push(i);
			}
		}
		cout <<maxi << endl;
	}
}
