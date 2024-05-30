#include<bits/stdc++.h>
using namespace std;
vector<int>v;
vector<vector<int>> vi;
int n,p,s,h;
int d[1000000];
int a[100];
void ktao()
{
	for (int i=0;i<=n;i++) a[i]=i;
}
void check ()
{
	int sum=0;
	for (int i=1;i<=n;i++) sum+=v[a[i]-1];
	if (sum==s)
	{
		vector<int> ve;
		for (int i=1;i<=n;i++) ve.push_back(v[a[i]-1]);
		vi.push_back(ve);
	}
}
void Try(int i)
{
	for (int j=a[i-1]+1;j<=h-i+n;j++)
	{
		a[i]=j;
		if (i==n) check();
		else Try(i+1);
	}
}
void kt ()
{
	for (int i=2;i<=200;i++) d[i]=1;
	d[0]=0;d[1]=0;
	for (int i=2;i<=15;i++)
		if (d[i]) for (int j=i*i;j<=225;j+=i) d[j]=0;
}

int main(){
	int t;cin>>t;
	kt();
	while (t--)
	{
		ktao();
		cin>>n>>p>>s;
		for (int i=p+1;i<=s;i++) if (d[i]==1) v.push_back(i);
		h=v.size();
		Try(1);
		cout << vi.size() << endl;
		for (int i=0;i<vi.size();i++)
		{
			for (int j=0;j<vi[i].size();j++) cout << vi[i][j] << " ";
			cout << endl;
		}
		vi.clear();
		v.clear();
		cout << endl;
	}
}
