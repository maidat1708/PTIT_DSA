#include<bits/stdc++.h>
using namespace std;
void run(int a[],int b[],int n)
{
	sort(b,b+n);
	int l=0,check=1;
	while (l<=n/2)
	{
		if (a[l]!=b[l]) reverse(a+l,a+n-l);
		if (a[l]!=b[l])
		{
			check=0;
			break;
		}
		l++;
	}
	if (check==0) cout << "No";
	else cout << "Yes";
}
int main(){
	int t; cin >> t;
	while(t--)
	{
		int n;cin>>n;
		int a[n],b[n];
		for (int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
		}
		run(a,b,n);
		cout << endl;
	}
}

