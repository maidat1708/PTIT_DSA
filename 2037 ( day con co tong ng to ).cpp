#include<bits/stdc++.h>
using namespace std;
int n,pos,a[20],b[20];
vector<vector<int>> v;
int nt (int n)
{
	if (n<2) return 0;
	if (n==2||n==3) return 1;
	if (n%2==0||n%3==0) return 0;
	for (int i=5;i*i<=n;i+=6) if (n%i==0||n%(i+2)==0) return 0;
	return 1;
}
void in(int m)
{
	vector<int>x;
	int sum=0;
	for (int i=1;i<=m;i++)
	{
		sum+=a[i];
		x.push_back(a[i]);
	}
	if (nt(sum)) v.push_back(x);
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
