#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int main(){;
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int maximum =1;
		for(int i =1;i<s.size()-1;++i) {
			int count =1;
			int j =1;
			while(s[i-j]==s[i+j]&&i-j>=0&&i+j<s.size()) {
				++j;
				count +=2;
			}
			maximum = max(maximum,count);
		}
		for(int i=0;i<s.size()-1;++i) if(s[i]==s[i+1]) {
			int j =1;
			int count =2;
			while(s[i-j]==s[i+1+j]&&i-j>=0&&i+1+j<s.size()) {
				++j;
				count+=2;
			}
			maximum = max(maximum,count);
		}
		cout<<maximum<<endl;
	}
}


