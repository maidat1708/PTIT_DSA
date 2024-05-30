#include<bits/stdc++.h>
using namespace std;

int a[100],n,ktra=0;
void nhap()
{
	for (int i=0;i<n;i++) a[i]=0;
}

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
	int t;cin >> t;
	while (t--)
	{
		cin>>n;
		ktra=0;
		nhap();
		while (ktra==0)
		{
			for (int i=0;i<n;i++)
			{
				if (a[i]==1) cout << "B";
				else cout << "A";
			}
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}

