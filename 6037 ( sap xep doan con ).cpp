#include<bits/stdc++.h>
using namespace std;
int n,a[100005];

void run()
{
	cin >> n;
	vector <int> v;
	for (int i=0;i<n;i++) cin >> a[i];         
	int l[n],r[n];
	for (int i=0;i<n;i++)
	{
		l[i]=-1e9;
		r[i]=1e9;
	}  
	l[0]=a[0];
	r[n-1]=a[n-1];
	for (int i=1;i<n;i++) l[i]=max(l[i-1],a[i]);
	for (int i=n-2;i>=0;i--) r[i]=min(r[i+1],a[i]);
	for (int i=0;i<n-1;i++)	if (l[i]<=r[i+1]) v.push_back(i+1);
	cout << v.size()<< endl;
	for (int i=0;i<v.size();i++) cout << v[i] << " ";
	cout << endl;
}

int main ()
{
	int t;cin >> t;
	while (t--)
	{
		run();
	}
}
