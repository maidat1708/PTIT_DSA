#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t; cin >> t;
	while (t--)
	{
		int n;cin>>n;
		stack<int> s;
		int a[n],b[n];
		for (int &x : a) cin >> x;
		for (int i=0;i<n;i++)
		{
			if (s.empty()) s.push(i);
			else
			{
				while(!s.empty()&&a[i]>a[s.top()])
				{
					b[s.top()]=a[i];
					s.pop();
				}
				s.push(i);
			}
		}
		while (!s.empty())
		{
			b[s.top()]=-1;
			s.pop();
		}
		for(int i=0;i<n;i++) cout << b[i] << " ";
		cout << endl;
	}
}
