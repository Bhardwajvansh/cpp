// like a line 1st element will leave 1st

// enqueqe --- push
// dequeqe --- pop
// peek --- top
// empty


// array implementation
// easy

// ll implementation
// better memory management

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node * next;
//     node(int val){
//         data=val;next=NULL;
//     }
// };
// class Queue{
//     public:
//     node * front;
//     node * back;
//     Queue(){
//         front =NULL;
//         back =NULL;
//     }
//     void enqueue(int x){
//         node * n=new node(x);
//         if(front==NULL){
//             back=n;
//             front=n;
//             return;
//         }
//         back->next=n;
//         back=n;
//     }
//     void dequeqe(){
//         if(front==NULL){
//             cout<<"queue is empty"<<endl;
//             return;
//         }
//         node * del=front;
//         front=front->next;
//         delete del;
//     }
//     int peek(){
//         if(front==NULL){
//             return -1;
//         }
//         return front->data; 
//     }
//     bool empty(){
//         if(front==NULL){
//             return true;
//         }
//         return false;
//     }
// };
// int main(){
//     Queue q;
//     q.enqueue(1);
//     q.enqueue(2);
//     q.enqueue(3);
//     cout<<q.peek()<<endl;
//     q.dequeqe();
//     cout<<q.peek()<<endl;
//     q.dequeqe();
//     cout<<q.peek()<<endl;
//     q.dequeqe();
//     cout<<q.peek()<<endl;
//     cout<<q.empty()<<endl;
//     return 0;
// }


// queue using stacks

// #include<bits/stdc++.h>
// using namespace std;
// class Queue{
//     stack <int> s1;
//     stack <int> s2;
//     public:
//     void push(int val){
//         s1.push(val);
//     }
//     int pop(){
//         if(s1.empty()&& s2.empty()){
//             return -1;
//         }
//         if(s2.empty()){
//             while(!s2.empty()){
//                 s2.push(s1.top());
//                 s1.pop();
//             }
//         }
//         int topval=s2.top();
//         s2.pop();
//         return topval;
//     }
//     bool empty(){
//         if(s1.empty() && s2.empty()){
//             return true;            
//         }
//         else return false;
//     }
// };
// int main(){
//     Queue q;
//     q.push(1);   
//     q.push(2);   
//     q.push(3);   
//     cout<<q.pop();
//     return 0;
// }


// stacks using quques

// #include<bits/stdc++.h>
// using namespace std;
// class stack{
//     int n;
//     queue<int> q1;
//     queue<int> q2;
//     public:
//     stack(){
//         n=0;
//     }
//     void push(int val){
//         q2.push(val);
//         n++;
//         while(!q1.empty()){
//             q2.push(q1.front());
//         q1.pop();
//         }
//         queue<int>
//     }
// }
// int main(){
    
//     return 0;
// }
