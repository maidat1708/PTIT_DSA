#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while (t--)
	{
		int n,dem=0,i=0;cin>>n;
		string s; cin >> s;
		while (i<s.size()&&dem<n)
		{
			int max=i,j=s.size();
			while (j>=i)
			{
				if (s[j]>s[max]) max=j;
				j--;
			}
			if (max!=i)
			{
				swap(s[max],s[i]);
				dem++;
			}
			i++;
		}
		cout << s;
		cout << endl;
	}
}
