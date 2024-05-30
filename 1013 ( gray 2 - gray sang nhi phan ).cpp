#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin >>t;
	while (t--)
	{
		string s,bin="";
		cin >> s;
		bin=s[0];
		for (int i=1;i<s.size();i++)
		{
			if (s[i]!=bin[i-1]) bin+="1"; // so sanh gray hien tai va bin tai i-1
			else bin+="0";
		}
		cout << bin << endl;
	}
}

