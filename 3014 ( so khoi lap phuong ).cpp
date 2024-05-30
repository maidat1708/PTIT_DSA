#include<bits/stdc++.h>
using namespace std;
long long ans=0;
int x[100],n;
string s;
bool lapphuong(long long n)
{
	int can=cbrt(n) + 0.5; // can bac 3 = cbrt , co the co sai so vd 10^9 = 999,99 nen can cong vs 0,5
	if (1ll*can*can*can==n) return true;
	return false;
}
void ql (int i)
{
	for( int j=0;j<=1;j++)
	{
		x[i]=j;
		if (i==n-1)
		{
			string tmp="";
			for (int j=0;j<n;j++) if (x[j]==1) tmp+=s[j]; // tim ra 1 so bang cach sinh nhi phan
			if (tmp!=""&&lapphuong(stoll(tmp)))
			{
				ans=max(ans,stoll(tmp));
			}
		}
		else ql(i+1);
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> s;
		n=s.size();
		ans=0;
		ql(0);
		if(ans==0) cout << "-1";
		else cout << ans;
		cout << endl;
	}
}



