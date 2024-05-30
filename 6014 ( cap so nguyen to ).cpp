#include<bits/stdc++.h>
using namespace std;
int nt(int n)
{
	for (int i=2;i*i<=n;i++) if (n%i==0) return 0;
	return 1;
}
int main ()
{
	int t; cin >>t;
	while (t--)
	{
		int n,ktra=0; cin >> n;
		for (int i=2;i<=n/2;i++) 
		{
			if (nt(i)&&nt(n-i))
			{
				cout <<i << " " << n-i;
				ktra=1;
				break;
			}
		}
		if (ktra==0) cout << "-1";
		cout << endl;
	}
}
