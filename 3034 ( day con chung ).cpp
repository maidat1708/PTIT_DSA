#include<bits/stdc++.h>
using namespace std;
void run(int a[],int b[],int c[],int n,int m ,int k)
{
	vector < int > v;
	int x=0,y=0,z=0;
	while (x<n&&y<m&&z<k)
	{
		if (a[x]==b[y]&&a[x]==c[z])
		{
			v.push_back(a[x]);
			x++;y++;z++;
		}
		else if (a[x]<b[y]||a[x]<c[z]) x++;
		else if (b[y]<a[x]||b[y]<c[z]) y++;
		else z++;
	}
	if (v.size()==0) cout << "NO";
	else for (auto x:v) cout << x << " ";
 }
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n,m,k;cin>>n>>m>>k;
		int a[n],b[m],c[k];
		for (int &x : a) cin >> x;
		for (int &x : b) cin >> x;
		for (int &x : c) cin >> x;
		run(a,b,c,n,m,k);
		cout << endl;
	}
}

