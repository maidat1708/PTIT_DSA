#include<bits/stdc++.h>
using namespace std;
int ans,dem=0;
int f1[5]={1,0,1,0,1};
int f2[5]={-1,-1,0,1,1};
int a,b,c,d;

void quaylui1(int i,int j)
{
	if (dem>=ans) return;
	if (i==c&&j==d&&dem<ans)
	{
		ans=dem;
		return;
	}
	for (int k=2;k<5;k++)
	{
		int imoi=i+f1[k];
		int jmoi=j+f2[k];
		if (imoi>=a&&imoi<=c&&jmoi>=b&&jmoi<=d)
		{
			dem++;
			quaylui1(imoi,jmoi);
			dem--;
		}
	}
}

void quaylui2(int i,int j)
{
	if (dem>=ans) return;
	if (i==c&&j==d&&dem<ans)
	{
		ans=dem;
		return;
	}
	for (int k=0;k<3;k++)
	{
		int imoi=i+f1[k];
		int jmoi=j+f2[k];
		if (imoi>=a&&imoi<=c&&jmoi>=d&&jmoi<=b)
		{
			dem++;
			quaylui2(imoi,jmoi);
			dem--;
		}
	}
}

int main ()
{
	cin >> a >> b >> c >> d;
	if (a>c)
	{
		swap(a,c);
		swap(b,d);
	}
	dem=0;ans=10000;
	if (b<=d) quaylui1(a,b);
	else quaylui2(a,b);
	cout << ans << endl;
}
