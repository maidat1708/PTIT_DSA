#include <iostream>
using namespace std;
int search (int in[],int x ,int n){
    for(int i = 0 ; i < n ;++i) if(x==in[i]) return i;
}
void printPostOrder(int in[],int pre[],int n){
    int root = search(in,pre[0],n);
    if(root!=0) printPostOrder(in,pre+1,root);
    if(root!=n-1) printPostOrder(in+root+1,pre+root+1,n-root-1);
    cout <<pre[0]<<" ";
}
int main()
{
    int t,n;
    cin >> t;
    while(t--){
        cin >> n ;
        int in[n],pre[n];
        for(int i = 0 ; i < n ;++i) cin >>in[i];
        for(int i = 0 ; i < n ;++i) cin >>pre[i];
        printPostOrder(in,pre,n);
        cout << endl;
    }
}
