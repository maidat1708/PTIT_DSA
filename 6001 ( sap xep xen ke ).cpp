#include<bits/stdc++.h>
using namespace std;

int main ()
{
	int t; cin >>t;
	while (t--)
	{
		int n;cin >>n;
		int a[n];
		for (int &x:a) cin >> x;
		sort(a,a+n);
		int l=0,r=n-1;
		while (1)
		{
			cout << a[r--] << " ";
			n--;
			if (n==0) break;
			cout << a[l++] << " ";
			n--;
			if (n==0) break;
		}
		cout << endl;
	}
}

