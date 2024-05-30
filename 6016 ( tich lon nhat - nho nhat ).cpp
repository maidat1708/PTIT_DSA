#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t; cin >>t;
	while (t--)
	{
		int n,m;cin >> n >> m;
		long long a[n],b[m],max=INT_MIN,min=INT_MAX;
		for (long long &x:a)
		{
			cin >> x;
			if (x>max) max=x;
		}
		for (long long &x:b)
		{
			cin >> x;
			if (x<min) min=x;
		}
		cout << max*min << endl;
	}
}
