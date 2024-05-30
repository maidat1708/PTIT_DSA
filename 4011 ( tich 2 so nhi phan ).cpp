#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s1,s2;
        long long x=0,y=0;
        cin >> s1>>s2;
        for(int i = 0 ; i < s1.size();++i) x+=(s1[i]-'0') * pow(2,s1.size()-1-i);
        for(int i = 0 ; i < s2.size();++i) y+=(s2[i]-'0') * pow(2,s2.size()-1-i);
        cout<<x*y<<endl;
    }
}

