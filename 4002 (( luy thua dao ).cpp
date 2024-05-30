#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
long long Pow(long long a,long long b)
{
	if (b==0) return 1;
	long long x=Pow(a,b/2)%mod;
	if (b%2==0) return x*x%mod;
	else return a*(x*x%mod)%mod;
}

int main()
{
	while (1)
	{
		long long  a,b;cin>>a,b;
		if (!a&&!b) break;
		cout << Pow(a,b);
		cout << endl;
	}
}
