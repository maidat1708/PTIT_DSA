#include<bits/stdc++.h>
using namespace std;
string x,s[11];
int use[300]={0};
void inkq()
{
	for (int i=0;i<x.size();i++) cout << s[i];
	cout << " ";
}
void TRY (int i)
{
	for (int j=0;j<x.size();j++)
	{
		if (!use[x[j]])
		{
			s[i]=x[j];use[x[j]]=1;
			if (i+1==x.size()) inkq();
			else TRY(i+1);
			use[x[j]]=0;
		}
	}
}


int main ()
{
	int t;cin >> t;
	while (t--)
	{
		cin >> x;
		TRY(0);
		cout << endl;
	}
}
