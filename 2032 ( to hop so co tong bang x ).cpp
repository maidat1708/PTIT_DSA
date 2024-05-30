#include<bits/stdc++.h>
using namespace std;
int n,s,a[21],b[100];
vector<vector<int>> vi;
void in (int m)
{
	vector<int> v;
	for (int i=1;i<=m;i++) v.push_back(b[i]);
	vi.push_back(v);
}

void Try(int i,int x)
{
	for (int j=1;j<=n;j++)
	{
		if (a[j]>=b[i-1]&&a[j]+x<=s)
		{
			b[i]=a[j];
			x+=a[j];
			if (x==s) in(i);
			else if (x>s)
			{
				x-=a[j];
				return;
			}
			else Try(i+1,x);
			x-=a[j];
		}
	}
}

int main()
{
    int t; cin >> t;
    while(t--){
        cin >> n >> s;
        b[0]=0;
        for (int i=1;i<=n;i++) cin >> a[i];
        Try (1,0);
        if (vi.size()==0) cout << "-1";
        else 
        {
        	cout << vi.size() << " ";
        	for (int i=0;i<vi.size();i++)
        	{
        		cout << "{";
        		for (int j=0;j<vi[i].size()-1;j++) cout << vi[i][j] <<" ";
        		cout << vi[i][vi[i].size()-1] << "} ";
			}
		}
		vi.clear();
		cout << endl;
    }
}
