#include<bits/stdc++.h>
using namespace std;

int a[100],n,k,ktra=0;
void nhap()
{
	for (int i=1;i<=n;i++) a[i]=i;
}

void sinh()
{
	int i=n-1;
	while (i>0&&a[i]>a[i+1]) i--;
	if (i==0)
	{
		ktra=1;
	}
	else  
	{
		int j=n;
		while (a[i]>a[j]) j--;
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	}
}
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		cin>>n;
		ktra=0;
		nhap();
		while (ktra==0)
		{
			for (int i=1;i<=n;i++) cout << a[i];
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}


