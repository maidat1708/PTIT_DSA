#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--) {
        string s ;
        cin >> s;
        stack<char> st;
        stack<int> st1;
        for (int i = 0 ; i < s.size();++i) {
            if (s[i]=='[') {
                if(i>0&&isdigit(s[i-1])) {
                    int j = i-1 , val = 0 ;
                    string x ; 
                    while(isdigit(s[j])) {
                        x += s[j]; 
                        j--;
                    }
                    reverse(x.begin(),x.end());
                    for (int j = 0 ; j < x.size();++j) val = 10*val + x[j] - '0';
                    st1.push(val);
                }
                else st1.push(1);
                st.push(s[i]);
            }
            else if (isalpha(s[i])) st.push(s[i]);
            else if (s[i]==']') {
                string s1,s2;
                while(!st.empty()&&st.top()!='['){
                    s1+=st.top();
                    st.pop();
                }
                reverse(s1.begin(),s1.end());
                int chay = st1.top();
                st1.pop();
                for (int j = 0 ; j<chay;++j) s2+=s1;
                st.pop();
                for(int j = 0 ;j<s2.size();++j) st.push(s2[j]);
            }
        }
        string val;
        while(!st.empty()) {
            if(st.top()!='[') val+=st.top();
            st.pop();
        }
        reverse(val.begin(),val.end());
        cout <<val<< endl;
    }
}
