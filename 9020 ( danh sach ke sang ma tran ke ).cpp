#include<bits/stdc++.h>
using namespace std;
int n,m,a[100][100];
int main()
{
	cin >> n;
	int a[n+1][n+1]={0};
	for (int i=1;i<=n;i++)
	{
		scanf ("\n");
		string x,num;
		getline(cin,x);
		stringstream ss(x);
		while (ss >> num) a[i][stoi(num)]=1;
	}
	for (int i=1;i<=n;i++) 
	{
		for (int j=1;j<=n;j++) cout << a[i][j] << " ";
		cout << endl;
	}
}



