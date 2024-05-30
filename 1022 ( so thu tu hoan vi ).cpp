#include<bits/stdc++.h>
using namespace std;
int n,ok;
string a="";
void ktao()
{
	a="";
	for (int i=1;i<=n;i++) a+=to_string(i);
}
void sinh ()
{
	int i=n-2;
	while (i>=0&&a[i]>a[i+1]) i--;
	if (i==-1) ok=0;
	else
	{
		int j=n-1;
		while (a[i]>a[j]) j--;
		swap(a[i],a[j]);
		int l=i+1,r=n-1;
		while (l<r)
		{
			swap(a[l],a[r]);
			l++,r--;
		}
	}
}

int main()
{
	int t;cin>>t;
	while (t--)
	{
		cin>>n;
		int dem=1;
		ok=1;
		ktao();
		string x="";
		for (int i=0;i<n;i++)
		{
			int k;
			cin>>k;
			x+=to_string(k);
		}
		while (ok)
		{
			if (x==a) cout << dem;
			dem++;
			sinh();
		}
		cout << endl;
	}
}

