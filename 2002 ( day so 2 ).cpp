#include<bits/stdc++.h>
using namespace std;
int a[100],n;
vector <string> str;
void TRY(int k)
{
	string x="";
	if (k==0) return;
	else
	{
		x+="[";
		for (int i=0;i<k-1;i++) x+=to_string(a[i])+" ";
		x+=to_string(a[k-1]) +"]";
	}
	str.push_back(x);
	for (int i=0;i<k-1;i++) a[i]+=a[i+1];
	TRY(k-1);
}
int main ()
{
	int t; cin>>t;
	while (t--)
	{
		cin >> n;
		for (int i=0;i<n;i++) cin>>a[i];
		TRY(n);
		for (int i=str.size()-1;i>=0;i--) cout << str[i] << " ";
		str.clear();
		cout << endl;
	}
}
