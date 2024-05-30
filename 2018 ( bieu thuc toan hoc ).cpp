#include<bits/stdc++.h>
using namespace std;
int a[5],check[5],sum,ok;
void Try(int i,int sum)
{
	if (ok) return;
	if (i==4&&sum==23)
	{
		ok=1;
		return;
	}
	for (int j=0;j<5;j++)
	{
		if (!check[j])
		{
			check[j]=1;
			Try(i+1,sum*a[j]);
			Try(i+1,sum+a[j]);
			Try(i+1,sum-a[j]);
			check[j]=0;
		}
	}
}
int main()
{
	int t;cin>>t;
	while (t--)
	{
		memset(check,0,sizeof(check));
		for (int i=0;i<5;i++) cin >> a[i];
		ok=0;
		for (int i=0;i<5;i++)
		{
			check[i]=1;
			Try(0,a[i]);
			check[i]=0;
		}
		if (ok) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}

