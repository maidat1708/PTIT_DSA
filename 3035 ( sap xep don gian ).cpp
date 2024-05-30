#include<bits/stdc++.h>
using namespace std;
int main() {
    int n ,maxi=0;
    cin >> n;
    int a[n+1] , visited[n+1]= {0};
    for (int i =1 ; i <= n;++i) cin >> a[i];
    for (int i =1 ;i <=n;++i) {
        if(!visited[a[i]-1]) visited[a[i]]= 1;
        else visited[a[i]] = visited[a[i]-1]+1;
    }
    for (int i = 1;i<=n;++i) maxi = max (maxi , visited[i]);
    cout<<n-maxi;
}
