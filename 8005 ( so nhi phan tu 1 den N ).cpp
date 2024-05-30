#include<bits/stdc++.h>
using namespace std;
vector<string> v;
int cnt=1;
queue<string> q;
void solve()
{
	for (int i=0;i<= 5000;i++)
	{
		string x=q.front();
		q.pop();
		v.push_back(x+"0");
		v.push_back(x+"1");
		q.push(x+"0");
		q.push(x+"1");
	}
}
int main ()
{
	int t;cin>>t;
	q.push("1");
	v.push_back("1");
	solve();
	while (t--)
	{
		int n;cin>>n;
		for (int i=0;i<n;i++) cout << v[i] << " ";
		cout << endl;
	}
}
