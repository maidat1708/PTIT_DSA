#include<bits/stdc++.h>
using namespace std;
int n,k,a[100]={0},ktra=1;
vector<vector <string>> vi;
void gan ()
{
	vector<string>v;
	for (int i=1;i<=n;i++)
		if (a[i]==0) v.push_back("A");
		else v.push_back("B");
	vi.push_back(v);
}
void check()
{
	int dem=0;
	for (int i=1;i<=n-k+1;i++) 
	{
		int ktra=1;
		if (!a[i])
		{
			for (int j=i+1;j<=i+k-1;j++)
			{
				if (a[i]!=a[j])
				{
					ktra=0;
					break;
				}
			}
			if (ktra==1) dem++;
		}
	}
	if (dem==1) gan ();
}
void sinh ()
{
	int i=n;
	while (i>=1&&a[i]==1)
	{
		a[i]=0;
		i--;
	}
	if (i==0) ktra=0;
	else a[i]=1;
}
int main ()
{
		cin >> n>>k;
		ktra=1;
		while (ktra)
		{
			sinh();
			check();
		}
		cout << vi.size() << endl;
		for (int i=0;i<vi.size();i++)
		{
			for (int j=0;j<n;j++) cout << vi[i][j];
			cout <<endl;
		}
}

