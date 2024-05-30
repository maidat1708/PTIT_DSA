#include<bits/stdc++.h>
using namespace std;
int n,a[17];
string s;
set<string> se;
void in()
{
	string x="";
	for (int i=0;i<n;i++) if (a[i]) x+=s[i];
	se.insert(x);
}

void Try(int i)
{
	for (int j=0;j<=1;j++)
	{
		a[i]=j;
		if (i==n-1) in();
		else Try(i+1);
	}
}
int main()
{
    int t; cin >> t;
    while(t--){
    	cin>>n>>s;
    	Try(0);
    	for (auto x: se) cout << x << " ";
    	se.clear();
		cout << endl;
    }
}
