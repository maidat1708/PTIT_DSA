#include<bits/stdc++.h>
using namespace std;
int n,pos,a[20],b[20];
vector<vector<int>> v;
void in(int m)
{
	vector<int>x;
	int sum=0;
	for (int i=1;i<=m;i++)
	{
		sum+=a[i];
		x.push_back(a[i]);
	}
	if (sum%2!=0) v.push_back(x);
}

void Try(int i)
{
	for (int j=1;j<=n;j++)
	{
		if (j>pos)
		{
			a[i]=b[j];
			pos=j;
			in(i);
			if (i<n) Try(i+1);
			pos=-1;
		}
	}
}
int main()
{
    int t; cin >> t;
    while(t--){
    	cin>>n;
    	pos=-1;
    	for (int i=1;i<=n;i++) cin >> b[i];
    	sort(b+1,b+n+1,greater<int>());
    	Try(1);
    	sort(v.begin(),v.end());
    	for (auto x : v)
    	{
    		for (auto k : x ) cout << k << " ";
    		cout << endl;
		}
		v.clear();
		cout << endl;
    }
}
