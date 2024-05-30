#include<bits/stdc++.h>
using namespace std;
int timdau (long long a[],long long x,int l,int r)
{
	int res=-1;
	while (l<=r)
	{
		int mid=(l+r)/2;
		if (x==a[mid])
		{
			res=mid;
			r=mid-1;
		}
		else if (x<a[mid]) r=mid-1;
		else l=mid+1; 
	}
	return res ;
}
int timcuoi (long long a[],long long x,int l,int r)
{
	int res=-1;
	while (l<=r)
	{
		int mid=(l+r)/2;
		if (x==a[mid])
		{
			res=mid;
			l=mid+1;
		}
		else if (x<a[mid]) r=mid-1;
		else l=mid+1; 
	}
	return res ;
}
int main ()
{
	int t; cin >>t;
	while (t--)
	{
		int n,s;
		cin >>n>>s;
		long long a[n],ans=0;
		for (long long &x:a) cin >> x;
		sort(a,a+n);
		for (int i=0;i<n;i++)
		{
			int p=timdau(a,0ll+s-a[i],i+1,n-1);
			int q=timcuoi(a,0ll+s-a[i],i+1,n-1);
			if (p!=-1)
			{
				ans+=q-p+1;
			}
		}
		cout << ans;
		cout << endl;
	}
}


