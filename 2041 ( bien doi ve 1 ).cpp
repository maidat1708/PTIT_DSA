
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    	int n;cin>>n;
    	int check[n+1]={0};
    	queue <int > q;
    	q.push(n);
    	while(!q.empty())
    	{
    		int u=q.front();
    		q.pop();
    		if (u==1) break;
    		if (u%3==0)
    		{
    			q.push(u/3);
    			if (!check[u/3]) check[u/3]=check[u]+1;
			}
			if (u%2==0)
    		{
    			q.push(u/2);
    			if (!check[u/2]) check[u/2]=check[u]+1;
			}
			q.push(u-1);
			if (!check[u-1]) check[u-1]=check[u]+1;
		}
		cout << check[1];
		cout << endl;
    }
}

