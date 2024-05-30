#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while (t--)
	{
		string a,b;
		cin>>a>>b;
		int d[1005][1005]={0};
		for (int i=1;i<=a.size();i++)
		{
			for (int j=1;j<=b.size();j++)
			{
				if (a[i-1]==b[j-1]) d[i][j]= d[i-1][j-1]+1;
				else d[i][j]=max(d[i][j-1],d[i-1][j]);
			}
		}
		cout << d[a.size()][b.size()];
		cout << endl;
	}
}



