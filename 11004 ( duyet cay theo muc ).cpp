#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node*left  ;
    Node *right ;
    Node (int x ) {
        data = x ;
        left = right = NULL;
    }
};
void makeNode(Node*root,int n1 ,int n2 ,char c ){
    switch(c) {
        case 'L': 
            root->left = new Node(n2);
            break;
        case 'R':
            root->right = new Node(n2);
    }
}
void insertNode(Node* root,int n1 ,int n2 ,char c ) {
    if (!root) return ;
    if (root-> data == n1) {
        makeNode(root,n1,n2,c) ;
        return;
    }
    else {
        insertNode(root->left,n1,n2,c);
        insertNode(root->right,n1,n2,c);
    }
}
void levelOrder(Node*root){
    queue<Node*> Q;
    Q.push(root);
    while(!Q.empty()){
        Node* top = Q.front();
        Q.pop();
        cout <<top->data<<" ";
        if(top->left) Q.push(top->left);
        if(top->right) Q.push(top->right);
    }
    cout << endl;
}
int main(){
    int t,n;
    cin >> t ;
    while(t--){
        cin >> n; 
        Node* root = NULL;
        while(n--){
            int n1 , n2 ; char c ;
            cin >> n1 >> n2 >> c;
            if(!root) root = new Node(n1);
            insertNode(root,n1,n2,c);
        }
        levelOrder(root);
    }
}
