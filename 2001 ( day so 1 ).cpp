#include<bits/stdc++.h>
using namespace std;
int a[100],n;
void TRY(int k)
{
	if (k==0) return;
	else
	{
		cout << "[";
		for (int i=0;i<k-1;i++) cout << a[i] <<" ";
		cout <<a[k-1] << "]" << endl;
	}
	for (int i=0;i<k-1;i++) a[i]+=a[i+1];
	TRY(k-1);
}
int main ()
{
	int t; cin>>t;
	while (t--)
	{
		cin >> n;
		for (int i=0;i<n;i++) cin>>a[i];
		TRY(n);
	}
}

