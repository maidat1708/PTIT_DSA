#include<bits/stdc++.h>
using namespace std;
struct task {
	int bd,kt;
}a[100005];
bool cmp (task a,task b)
{
	return a.kt < b.kt;
}

int main(){
	int t;cin>>t;
	while (t--)
	{
		int n;cin>>n;
		for (int i=0;i<n;i++) cin>>a[i].bd>>a[i].kt;
		sort(a,a+n,cmp);
		int i=0,d=1;
		for (int j=1;j<n;j++)
		{
			if (a[j].bd>=a[i].kt) 
			{
				i=j;d++;
			}
		}
		cout << d;
		cout << endl;
	}
}
