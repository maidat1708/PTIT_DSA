#include<bits/stdc++.h>
using namespace std;
long long a[93];
int Pow(int n,long long b)
{
	if (n==1) return 65;
	if (n==2) return 66;
	if (b>a[n-2]) return Pow(n-1,b-a[n-2]);
	return Pow(n-2,b);
}

int main()
{
	a[1]=1;a[2]=1;
	for (int i=3;i<=92;i++) a[i]=a[i-1]+a[i-2];
	int t;cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		long long b; cin>>b;
		cout << char(Pow(n,b));
		cout << endl;
	}
}
