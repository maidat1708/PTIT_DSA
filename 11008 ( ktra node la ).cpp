#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
    Node(int x) {
        data = x ;
        left = right = NULL;
    }
};
void makeNode(Node*root, int n1,int n2,char c ){
    if(c=='L') root->left = new Node(n2);
    else root->right = new Node(n2);
}
void insertNode(Node*root,int n1,int n2,char c ){
    if (!root) return;
    if (root->data==n1) {
        makeNode(root,n1,n2,c);
        return ;
    }
    else {
        insertNode(root->left,n1,n2,c);
        insertNode(root->right,n1,n2,c);
    }
}
vector<int> level;
void preOrder(Node*root,int cnt) {
    if (!root->left && !root->right) {
        level.push_back(cnt);
        return;
    }
    if(root->left)preOrder(root->left,cnt+1 );
    if(root->right)preOrder(root->right,cnt+1 );
}
void Export(){
    for(int i = 0 ; i <level.size()-1;++i) if (level[i]!=level[i+1]){
        cout <<"0\n";
        return;
    }
    cout <<"1\n";
}
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n; 
        level.clear();
        Node*root = NULL;
        while(n--) {
            int n1,n2 ;
            char c ;
            cin >> n1 >>n2 >>c; 
            if (!root) root = new Node(n1);
            insertNode(root,n1,n2,c);
        }
        preOrder(root,0);
        Export();
    }
}
