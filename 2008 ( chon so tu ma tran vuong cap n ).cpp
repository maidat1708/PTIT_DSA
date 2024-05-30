#include<bits/stdc++.h> 
using namespace std;
int a[100],n,b[101][101],k,ktra;
vector<vector<int>> vi;
void nhap()
{
	for (int i=1;i<=n;i++) a[i]=i;
}
void sinh()
{
	int i=n-1;
	while (i>=1&&a[i]>a[i+1]) i--;
	if (i==0) ktra=0;
	else
	{
		int j=n;
		while (a[i]>a[j]) j--;
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	}
}
void check()
{
	int sum=0;
	vector<int> v;
	for (int i=1;i<=n;i++) sum+=b[i][a[i]];
	if (sum==k)
	{
		for (int i=1;i<=n;i++) v.push_back(a[i]);
		vi.push_back(v);
	}
}
int main()
{
		cin>>n>>k;
		nhap();
		for (int i=1;i<=n;i++) for (int j=1;j<=n;j++) cin >> b[i][j];
		ktra=1;
		while (ktra)
		{
			check();
			sinh();
		}
		cout << vi.size() << endl;
		for (int i=0;i<vi.size();i++)
		{
			for (int j=0;j<vi[i].size();j++) cout << vi[i][j] << " ";
			cout << endl;
		}
}

