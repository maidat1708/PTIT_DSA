#include<bits/stdc++.h>
using namespace std;
int n,k,s,ok,a[100];
int check[21];
void Try (int sum , int dem)
{
	if (dem==k) ok=1;
	if (ok) return;
	
	for (int i=1;i<=n;i++)
	{
		if (!check[i])
		{
			check[i]=1;
			if (sum==s) Try(0,dem+1);
			else if (sum<s) Try(sum+a[i],dem);
			else return;
		}
		check[i]=0;
	}
}

int main ()
{
	int t; cin >>t;
	while (t--)
	{
		memset(check,0,sizeof(check));
		cin>>n>>k;
		ok=0,s=0;
		for (int i=1;i<=n;i++)
		{
			cin >> a[i];
			s+=a[i];
		}
		if (s%k!=0) cout << "0";
		else
		{
			s/=k;
			Try (0,0);
			if (ok) cout << "1";
			else cout << "0";
		}
 		cout << endl;
	}
}
