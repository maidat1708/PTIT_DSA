#include<bits/stdc++.h>
using namespace std;
int n, uset[10000]={0},usex[10000]={0},usec[10000]={0},ans=0;
void Try (int i)
{
	for (int j=1;j<=n;j++) // run hang
	{
		if (usec[j]==0&&usex[i+j-1]==0&&usen[i-j+n]==0)
		{
			usec[j]=1; // cot 
			usex[i+j-1]=1;// duong cheo xuoi
			usen[i-j+n]=1;// duong cheo nguoc
			if (i==n) ans++;
			else Try(i+1);
			// backtrack
			usec[j]=0;usex[i+j-1]=0;usen[i-j+n]=0;
		}
	}
}
int main ()
{
	int t;cin >> t;
	while (t--)
	{
		cin >> n;
		Try(1);
		cout << ans;
		ans=0;
		cout << endl;
	}
}
