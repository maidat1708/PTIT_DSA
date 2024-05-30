#include<bits/stdc++.h>
using namespace std;
void run(int a[],int n)
{
	sort(a,a+n);
	int m=INT_MIN;
	m=max(m,a[n-1]*a[n-2]);
	m=max(m,a[0]*a[1]);
	m=max(m,a[n-1]*a[n-2]*a[n-3]);
	m=max(m,a[0]*a[1]*a[n-1]);
	cout << m;
}
int main()
{
//	int t; cin >> t;
//	while(t--)
//	{
		int n;cin>>n;
		int a[n];
		for (int i=0;i<n;i++) cin >> a[i];
		run(a,n);
		cout << endl;
//	}
}
#include<stdio.h>
int main ()
{

	return 0;
}

