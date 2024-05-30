#include<bits/stdc++.h>
using namespace std;
int a[20][20],check=0,n;

void Try (int cot,int hang , string ans)
{
	if (cot==n&&hang==n)
	{
		cout << ans << " ";
		check=1;
	}
	int cot_new=cot+1; // sang phai R
	int hang_new=hang+1; // di xg D
	if (a[hang_new][cot])
	{
		ans+="D";
		Try(cot,hang_new,ans);
		ans.pop_back();
	}
	if (a[hang][cot_new])
	{
		ans+="R";
		Try(cot_new,hang,ans);
		ans.pop_back();
	}
}
int main()
{
	int t;cin>>t;
	while (t--)
	{
		cin>>n;
		check=0;
		for(int i=1;i<=n;i++) for (int j=1;j<=n;j++) cin >> a[i][j];
		if (a[1][1]==0) cout << "-1";
		else
		{
			Try(1,1,"");
			if (check==0) cout << "-1";
		}
		cout << endl;
	}
}
