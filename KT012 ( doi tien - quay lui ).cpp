#include<bits/stdc++.h>
using namespace std;
int n,s,kq=10000,a[100];
void dequy(int i, int sum , int x)
{
	if (sum > s|| x > kq) return;
	if (i==n)
	{
		if(sum==s)	kq=min(kq,x);
		return;
	}
	dequy(i+1,sum,x);
	dequy(i+1,sum+a[i],x+1);
}
int main(){
	cin>>n>>s;
	for (int i=0;i<n;i++) cin>>a[i];
	dequy(0,0,0);
	if (kq!=10000) cout << kq;
	else cout << "-1";
}
