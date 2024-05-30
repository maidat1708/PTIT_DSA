#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n]  ,b[n],c[n];
        for (int i  =0 ; i < n;++i) cin >> a[i];
        stack < int > st;
        for(int i=n-1;i>=0;--i) {
            while(!st.empty()&&a[st.top()]<=a[i]) st.pop();
            if (st.empty()) b[i] = -1;
            else b[i] = st.top();
            st.push(i);
        }
        stack<int> st1;
        for(int i=n-1;i>=0;--i) {
            while(!st1.empty()&&a[st1.top()]>=a[i]) st1.pop();
            if (st1.empty()) c[i] = -1;
            else c[i] = st1.top();
            st1.push(i);
        }
        
        for (int i =0 ;i<n;++i) {
            if(b[i]==-1) cout <<-1<<" ";
            else {
                if(c[b[i]]==-1) cout <<-1<<" ";
                else cout << a[c[b[i]]]<<" ";
            }
        }
        cout << endl;
    }
}
