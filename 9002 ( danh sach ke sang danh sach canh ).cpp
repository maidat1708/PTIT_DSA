#include<bits/stdc++.h>
using namespace std;
int n,m,a[100][100];
int main()
{
	cin >> n;
	vector<pair<int,int>> v;
	for (int i=1;i<=n;i++)
	{
		scanf ("\n");
		string x,num;
		getline(cin,x);
		stringstream ss(x);
		while (ss >> num)
			if (stoi(num)>i) v.push_back({i,stoi(num)});
	}
	for (auto x:v) cout << x.first <<" " << x.second<< endl;
}



