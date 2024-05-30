#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t; cin >> t;
	while (t--)
	{
		string x;
		cin >> x;
		stack<char> s;
		int dem=0;
		for (int i=0;i<x.size();i++)
		{
			if (x[i]=='(') s.push(x[i]);
			else
			{
				if (s.empty())
				{
					s.push('(');
					dem++;
				}
				else s.pop();
			}
		}
		cout << dem+s.size()/2 << endl;
	}
}
