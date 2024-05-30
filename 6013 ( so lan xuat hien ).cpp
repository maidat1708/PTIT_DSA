#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t; cin >>t;
	while (t--)
	{
		int n,x,ans=0;cin>>n>>x;
		for (int i=0;i<n;i++) 
		{
			int k; cin >> k;
			if (x==k) ans++;
		}
		if (ans==0) cout << "-1";
		else cout << ans ;
		cout << endl;
	}
}


