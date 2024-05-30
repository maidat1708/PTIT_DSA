#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t; cin >>t;
	while (t--)
	{
		int n,m,x,ma=INT_MIN,mi=INT_MAX;
		cin>>n>>m;
		int A[100005]={0},B[100005]={0};
		for (int i=0;i<n;i++) 
		{
			cin>>x;
			A[x]++;
			ma=max(x,ma);
			mi=min(x,mi);
		}
		for (int i=0;i<m;i++) 
		{
			cin>>x;
			B[x]++;	
			ma=max(x,ma);
			mi=min(x,mi);
		}
		for (int i=mi;i<=ma;i++) if (A[i]!=0||B[i]!=0) cout << i << " ";
		cout << endl;
		for (int i=mi;i<=ma;i++) if (A[i]!=0&&B[i]!=0) cout << i << " ";
		cout << endl;
	}
}

