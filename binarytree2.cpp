// 1st node = root node
// child nodes = all the nodes except root node
// leaves node = ending nodes

// full binary tree = all levels have either 0 or 2 nodes

// complete binary tree = all levels ar completely filled

// prefect binary tree = all leaf node ar at the same level

// balanced binary tree = for nodes n the maximum levels should be log2(n)

// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int data;
//     node * left;
//     node * right;
//     node(int val){
//         data=val;
//         left=right=NULL;
//     }
// };

// int main(){
    // node * n=new node(1);
    // n->left=new node(2);    
    // n->right=new node(3);    
    // n->left->right=new node(4);    
    // n->left->left=new node(5);    
//     return 0;
// }

// inorder traversal techinque

// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int data;
//     node * left;
//     node * right;
//     node(int val){
//         data=val;
//         left=right=NULL;
//     }
// };
// void inorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// int main(){
//     node * n=new node(1);
//     n->left=new node(2);    
//     n->right=new node(3);    
//     n->left->right=new node(4);    
//     n->left->left=new node(5);  
//     inorder(n);
//     return 0;
// }

// pre-order traversal

// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int data;
//     node * left;
//     node* right;
//     node(int val){
//         data=val;
//         left=right=NULL;
//     }
// };
// void pre(node* root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     pre(root->left);
//     pre(root->right);
// }
// int main(){
    // node * n=new node(1);
    // n->left=new node(2);
    // n->right=new node(3);
    // n->left->left=new node(4);
    // n->left->right=new node(5);
    // pre(n);
//     return 0;
// }


// post order traversal

// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int data;
//     node * left;
//     node * right;
//     node(int val){
//         data=val;
//         left=right=NULL;
//     }
// };
// void post(node * root){
//     if(root==NULL){
//         return;
//     }
//     post(root->left);
//     post(root->right);
//     cout<<root->data<<" ";
// }
// int main(){
    // node * n=new node(1);
    // n->left=new node(2);
    // n->right=new node(3);
    // n->left->left=new node(4);
    // n->left->right=new node(5);
    // post(n);
//     return 0;
// }


// level order traversal

// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int data;
//     node  * left;
//     node  * right;
//     node(int val){
//         left=right=NULL;
//         data=val;
//     }
// };
// vector<vector<int>> level(node * root){
//     vector<vector<int>> ans;
//     if(root==NULL) return ans;
//     queue<node * > q;
//     q.push(root);
//     while (!q.empty()){
//         int s=q.size();
//         vector<int> level;
//         for(int i=0;i<s;i++){
//             node * nod=q.front();
//             q.pop();
//             if(nod->left!=NULL) q.push(nod->left);
//             if(nod->right!=NULL) q.push(nod->right);
//             level.push_back(nod->data);
//         }
//         ans.push_back(level);
//     }
//     return ans;
    
// }
// int main(){
    // node * n=new node(1);
    // n->left=new node(2);
    // n->right=new node(3);
    // n->left->left=new node(4);
    // n->left->right=new node(5);
//     vector<vector<int>> v=level(n);
//     for (int i = 0; i < v.size(); i++) {
//         for (int j = 0; j < v[i].size(); j++)
//             cout << v[i][j] << " ";
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// struct node {
//     int data;
//     node * left;
//     node * right;
//     node(int val){
//         data=val;
//         left=right=NULL;
//     }
// };
// vector<vector<int>> level(node * root){
//     vector<vector<int>> ans;
//     if(root==NULL){
//         return ans;    
//     }
//     queue<node * > q;
//     q.push(root);
//     while(!q.empty()){
//         int s=q.size();
//         vector<int> level;
//         for(int i=0;i<s;i++){
//             node * nod=q.front();
//             q.pop();
//             if(nod->left!=NULL) q.push(nod->left);
//             if(nod->right!=NULL) q.push(nod->right);
//             level.push_back(nod->data);
//         }
//         ans.push_back(level);
//     }
//     return ans;
// }
// int main(){
//     node * n=new node(1);
//     n->left=new node(2);
//     n->right=new node(3);
//     n->left->left=new node(4);
//     n->left->right=new node(5);
//     vector<vector<int>> v=level(n);
//     for(int i=0;i<v.size();i++){
//         for(int j=0;j<v[i].size();j++){
//             cout<<v[i][j]<<" ";
//         }
//     }
//     return 0;
// }