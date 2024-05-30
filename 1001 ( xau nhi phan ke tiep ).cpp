#include<bits/stdc++.h>
using namespace std;

int a[1001],n,ktra=0;

void sinh()
{
	int i=n-1;
	while (i>=0&&a[i]==1) 
	{
		a[i]=0;
		i--;
	}
	if (i==-1)
	{
		ktra=1;
	}
	else  
	{
		a[i]=1;
	}
}
int main()
{
	int t;cin >>t;
	while (t--)
	{
		scanf ("\n");
		string x;
		cin >> x;
		n=x.size();
		for (int i=0;i<n;i++) a[i]=x[i]-'0';
		ktra=0;
		sinh();
		if (ktra==1) for (int i=0;i<n;i++) cout << "0";
		else for (int i=0;i<n;i++) cout << a[i];
		cout << endl;
	}
}
