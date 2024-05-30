#include<bits/stdc++.h>
using namespace std;
int n,x,ok,a[100],b[100];
void in (int n)
{
	cout << "[";
	for (int i=1;i<n;i++) cout << b[i] << " ";
	cout << b[n] << "]";
}

void Try (int i,int s)
{
	for (int j=1;j<=n;j++)
	{
		if (a[j]>=b[i-1]&&s+a[j]<=x)
		{
			b[i]=a[j];
			s+=a[j];
			if (s==x)
			{
				ok=1;
				in(i);
			}
			else if (s>x)
			{
				s-=a[j];
				return;
			}
			else Try(i+1,s);
			s-=a[j]; 
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--)
	{
		cin >>  n >> x;
		for(int i=1;i<=n;i++) cin >> a[i];
		b[0] = 0;
		ok=0;
		Try(1,0);
		if(ok==0) cout << "-1";
		cout << endl;
	}
}
