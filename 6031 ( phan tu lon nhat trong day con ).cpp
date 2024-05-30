#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n],max=INT_MIN;
		for (int &x:a) cin >> x;
		for (int i=0;i<k;i++) if (a[i]>max) max=a[i];
		cout << max << " ";
		for (int i=k;i<n;i++) 
		{
			if (a[i-k]==max)
			{
				max=INT_MIN;
				for (int j=i-k+1;j<=i;j++) if (max<a[j]) max=a[j];
			}
			else if (a[i]>max) max=a[i];
			cout << max << " ";
		}
		cout << endl;
	}
}
