#include<bits/stdc++.h> 
using namespace std;
string x(14,'0');
long long a[505]={0},ok=1;
vector<long long>v;
void sinh()
{
	int i=x.size()-1;
	while (i>=0&&x[i]=='9')
	{
		x[i]='0';
		i--;
	}
	if(i==-1) ok=0;
	else x[i]='9';
}
int main()
{
	ok=1;
	while (ok)
	{
		sinh();
		v.push_back(stoll(x));
	}
	int t;cin>>t;
	while (t--)
	{
		int n ;cin>>n;
		for (long long x : v)
		{
			if (x%n==0)
			{
				cout << x << endl;
				break;
			}
		}
	}
}
