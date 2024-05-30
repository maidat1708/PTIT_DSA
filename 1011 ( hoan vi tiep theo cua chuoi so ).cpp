#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin >>t;
	while (t--)
	{
		int k;
		cin >> k;
		string s;
		cin >> s;
		cout << k << " ";
		int n=s.size()-2;
		while (n>=0&&s[n]>=s[n+1]) n--;
		if (n==-1) cout << "BIGGEST";
		else
		{
			int j=s.size()-1;
			while (s[n]>=s[j]) j--;
			swap(s[n],s[j]);
			for(int i=0;i<(s.size()-n)/2;i++) swap(s[i+n+1],s[s.size()-i-1]);
			for (int i=0;i<s.size();i++) cout << s[i];
		}
		cout << endl;
	}
}

