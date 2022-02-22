// propetries of binary tree

// maximum nodes at level L = 2^L

// maximum nodes at height H = (2^H)-1

// for N nodes minimum possible height log2(N+1)

// A binary tree with L leaves has at least log2(N+1)+1 number of levels


// #include<bits/stdc++.h>
// using namespace std;
// struct node
// {
//     int data;
//     struct node * left;
//     struct node * right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };

// int main(){
//     struct node * root=new node(1);
//     root->left=new node(2);
//     root->left=new node(3);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     return 0;
// }

// binary tree traversals

// preorder reversal - root ; left subtree ; right subtree

// inorder traversal - left subtree untill right dose not exist ; root data ; right subtree

// post order traversal - left subtree ; right tree ; roots

// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int data;
//     node * left;
//     node * right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// void pre(struct node* root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     pre(root->left);
//     pre(root->right);
// }
// void inter(node * root){
//     if(root==NULL){
//         return;
//     }
//     inter(root->left);
//     cout<<root->data<<" ";
//     inter(root->right);
// }
// void post(struct node * root){
//     if(root==NULL){
//         return;
//     }
//     post(root->left);
//     post(root->right);
//     cout<<root->data<<" ";
// }
// int main(){
//     struct node * root=new node (1);
//     root->left=new node(2);
//     root->right=new node(3);

//     root->left->left=new node(4);
//     root->left->right=new node(5);

//     root->right->left=new node(6);
//     root->right->right=new node(7);

//     pre(root);
//     cout<<endl;
//     inter(root);
//     cout<<endl;
//     post(root);
//     return 0;
// }


// building tree from preorder and inorder

// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int data;
//     node * left;
//     node * right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// int search(int ino[],int start,int end,int curr){
//     for(int i=start;i<=end;i++){
//         if(ino[i]==curr){
//             return i;
//         }
//     }
//     return -1;
// }
// node * built(int pre[],int ino[],int start,int end){
//     static int ind=0;
//     if(start>end){
//         return NULL;
//     }
//     int curr=pre[ind];
//     ind++;
//     node * n=new node(curr);
//     if(start==end){
//         return n;
//     }
//     int pos=search(ino,start,end ,curr);
//     n->left=built(pre,ino,start,pos-1);
//     n->right=built(pre,ino,pos+1,end);
    
//     return n;
// }
// void print(node * root){
//     if(root==NULL){
//         return;
//     }
//     print(root->left);
//     cout<<root->data<<" ";
//     print(root->right);
// }
// int main(){
//     int pre[]={1,2,4,3,5};
//     int ino[]={4,2,1,5,3};
//     node * root=built(pre,ino,0,4);
//     print(root);
//     return 0;
// }

// //////////////// check every element of preorder to get the root points ; make a static variable index and traverse it
// make the node of these root points
// find out the pos of element taken from pre in inorder and store as pos ; make search funtion for this
// first search with lwft elements and store in n->left with pre ino start pos-1 arguments 
//  then search in right elements and store in n->right with pre ino pos+1 end arguments



// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int data;
//     node * left;
//     node * right;
//     node (int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// int search(int ino[],int start,int end,int curr){
//     for(int i=start;i<=end;i++){
//         if(ino[i]==curr){
//             return i;
//         }
//     }
//     return -1;
// }
// node * built(int pre[],int ino[],int start,int end){
//     static int ind=0;
//     if(start>end){
//         return NULL;
//     }
//     int curr=pre[ind];
//     ind++;
//     node * n=new node(curr);
//     if(end==start){
//         return n;
//     }
//     int pos=search(ino,start,end,curr);
//     n->left=built(pre,ino,start,pos-1);
//     n->right=built(pre,ino,pos+1,end);
//     return n; 
// }
// void print(node * root){
//     if(root==NULL){
//         return;
//     }
//     print(root->left);
//     cout<<root->data<<" ";
//     print(root->right);
// }
// int main(){
//     int preorder[]={1,2,4,3,5};
//     int inorder[]={4,2,1,5,3};
//     node * root = built(preorder,inorder,0,4);   
//     print(root);
//     return 0;
// }

// building from inorder and postorder

// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int data;
//     node * left;
//     node * right;
//     node ( int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// int search(int ino[],int start,int end,int curr){
//     for(int i=start;i<=end;i++){
//         if(ino[i]==curr){
//             return i; 
//         }
//     }
//     return -1;
// }
// node * built(int ino[],int post[],int start,int end){
//     static int ind=4;
//     if(start>end){
//         return NULL;
//     }
//     int curr=post[ind];
//     ind--;
//     node * n=new node(curr);
//     if(start==end){
//         return n;
//     }
//     int pos=search(ino,start,end,curr);
//     n->right=built(ino,post,pos+1,end);
//     n->left=built(ino,post,start,pos-1);
//     return n;
// }
// void display(node* root){
//     if(root==NULL){
//         return;
//     }
//     display(root->left);
//     cout<<root->data<<" ";
//     display(root->right);
// }
// int main(){
//     int post[]={4,2,5,3,1};
//     int ino[]={4,2,1,5,3};
//     node * root=built(ino,post,0,4);
//     display(root);
//     return 0;
// }


// level order traversal
// will use queue

// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int data;
//     node* left;
//     node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// void print(node* root){
//     if(root==NULL){
//         return;
//     }
//     queue<node*>q;
//     q.push(root);
//     q.push(NULL);
//     while(!q.empty()){
//         node * n=q.front();
//         q.pop();
//         if(n!=NULL){
//             cout<<n->data<<" ";
//             if(n->left) q.push(n->left);
//             if(n->right) q.push(n->right);
//         }
//         else if(!q.empty()) q.push(NULL);
//     }
// }
// int main(){
    // node * root=new node(1);
    // root->left=new node(2);
    // root->right=new node(3);
    // root->left->left=new node(4);
    // root->left->right=new node(5);
    // root->right->left=new node(6);
    // root->right->right=new node(7);
//     print(root);
//     return 0;
// }

// sum of nodes at kth level using lecel order

// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int data;
//     node * left;
//     node * right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// int sumk(node* root,int k){
//     if(root==NULL){
//         return -1;
//     }
//     queue<node*> q;
//     q.push(root);
//     q.push(NULL);
//     int level=0;
//     int sum=0;
//     while(!q.empty()){
//         node * n=q.front();
//         q.pop();
//         if(n!=NULL){
//             if(level==k){
//                 sum+=n->data;
//             }
//             if(n->left) q.push(n->left);
//             if(n->right) q.push(n->right);
//         }
//         else if(!q.empty()){
//             q.push(NULL);
//             level++;
//         }
//     }
//     return sum;
// }
// int main(){
    // node * root=new node(1);
    // root->left=new node(2);
    // root->right=new node(3);
    // root->left->left=new node(4);
    // root->left->right=new node(5);
    // root->right->left=new node(6);
    // root->right->right=new node(7);
    // cout<<sumk(root,2);
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
//         left=NULL;
//         right=NULL;
//     }
// };
// int sumk(node * root,int k){
//     if(root==NULL){
//         return -1;
//     }
//     queue<node*>q;
//     q.push(root);
//     q.push(NULL);
//     int level=0;
//     int sum=0;
//     while(!q.empty()){
//         node * n=q.front();
//         q.pop();
//         if(n!=NULL){
//             if(level==k){
//                 sum+=n->data;
//             }
//             if(n->left) q.push(n->left);
//             if(n->right) q.push(n->right);
//         }
//         else if(!q.empty()){
//             level++;
//             q.push(NULL);
//         }
//     }
//     return sum;
// }
// int main(){
//     node * root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     root->right->left=new node(6);
//     root->right->right=new node(7);
//     cout<<sumk(root,2);
//     return 0;
// }


