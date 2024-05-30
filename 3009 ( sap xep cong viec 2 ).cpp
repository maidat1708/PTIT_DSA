#include<bits/stdc++.h>
using namespace std;

struct cv
{
	int id,dl,profit;
};
bool cmp (cv a,cv b)
{
	return a.profit>b.profit;
}

void run ()
{
	int n ; cin >> n;
	cv a[n];
	int used[n]={0},res[n];
	for (int i=0;i<n;i++) 
		cin >> a[i].id >> a[i].dl >> a[i].profit;
		
	sort (a,a+n,cmp); // sap xep theo profit
	for (int i=0;i<n;i++)
		for (int j=min(a[i].dl-1,n-1) ; j>=0;j--) // chay vong for de tim thoi gian chua co cong viec nao
			if (used[j]==0) // thoi gian thu j chua co cong viec nao
			{
				used[j]=1;
				res[j]=i; // luu cong viec i vao thoi gian j
				break;
			}
	
	int cnt=0,ans=0;
	for (int i=0;i<n;i++)
	{
		if (used[i]==1)
		{
			cnt++;
			ans+=a[res[i]].profit;
		}
	}
	cout << cnt << " " << ans << endl;
}


int main()
{
	int t; cin >> t;
	while(t--)
	{
		run();
		cout << endl;
	}
}



