#include<bits/stdc++.h>
using namespace std;

int n,a[100],dem=0;
set<long long> s;
void in(int n)
{
	long long x=0;
	for (int i=1;i<=n;i++) x=x*10+a[i];
	s.insert(x);
}

void run (int i)
{
	if (i==12) return;
	for (int j=0;j<=2;j++)
	{
		a[i]=j;
		if (a[i]==2) dem++;
		if (dem>(i/2)) in(i);
		run(i+1);
		if (a[i]==2) dem--;
	}
}

int main ()
{
	run(1);
	int t;cin>>t;
	while (t--)
	{
		cin>>n;
		for (auto x : s) 
		{
			n--;
			cout << x;
			cout <<" ";
			if (n==0) break;
		}
		cout << endl;
	}
}
