#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t; cin >>t;
	while (t--)
	{
		int n;
		cin >>n;
		int a[n];
		set<int> s;
		for (int &x:a)
		{
			cin>>x;
			while (x>0)
			{
				int u=x%10;
				s.insert(u);
				x/=10;
			}
		}
		for (auto &x:s) cout << x << " ";
		cout << endl;
	}
}


