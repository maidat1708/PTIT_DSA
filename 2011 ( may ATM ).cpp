#include<bits/stdc++.h>
using namespace std;
int n,s,ok,a[100],minn=36;
void Try (int i,int sum,int dem)
{
	if (sum>s||dem>minn) return;
	if (i==n)
	{
		if (sum==s) minn=min(minn,dem);
		return;
	}
	Try(i+1,sum,dem);
	Try(i+1,sum+a[i],dem+1);
}

int main(){
	int t; cin >> t;
	while(t--)
	{
		minn=36;
		cin >>  n >> s;
		for(int i=0;i<n;i++) cin >> a[i];
		Try(0,0,0);
		if(minn==36) cout << "-1";
		else cout << minn;
		cout << endl;
	}
}
