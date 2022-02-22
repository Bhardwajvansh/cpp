// array
// array is single block of memory with partitions 
// fixed size
// block of memory is fixed

// list
// list is a multiple block of memory which are interconnected
// size can be modified
// non contiguoug

// node
// [1st element]||[pointer of second element]

//structure of a list;
// [1]||[ptr of 2]--[2]||[ptr of 3]--[3]||[null].----------consists of 3 elements
// head pointer is the one which stores the pointer of 1st element


// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int val){
//         data=val;
//         next=NULL;

//     }
// };
// void insertattail(node* &head,int val){
//     node* n=new node(val);
//     if(head==NULL){
//         head=n;
//         return;                                      // insert at the end
//     }
//     node* temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=n;
// }

// void insertathead(node* &head,int val){
//     node * n=new node(val);
//     n->next=head;                                    // insert at startning 
//     head=n;
//     return;
// } 

// bool searching(node* head,int key){
//     node* temp=head;
//     while(temp!=NULL){                                 // searching elements
//         if(temp->data==key){
//             return true;
//         }
//         temp=temp->next;
//     }
//     return false; 
// }

// void deletion(node * &head,int val){
//     if(head==NULL){
//         return;
//     }

//     if(head->next==NULL){
//         delstart(head);
//         return;
//     }

//     node * temp=head;
//     while(temp->next->data!=val){
//         temp=temp->next;                              // to delete  an element
//     }
//     node * del=temp->next;
//     temp->next=temp->next->next;
//     delete del;
// }

// // void del(node* &head, int val){
// //     node * temp=head;
// //     while(temp->next->data!=val){
// //         temp=temp->next;
// //     }
// //     node * dele=temp->next;  
// //     temp->next=temp->next->next;
// //     delete dele;
// // }

// void delstart(node * &head){
//     node * todel=head;                               // delete 1st element
//     head=head->next;
//     delete todel;
// }

// // void delestart(node * &head){
// //     node * del=head;
// //     head=head->next;
// //     delete del;
// // }

// void display(node* head){
//     node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;                     // display list elements
//     }
//     cout<<"NULL"<<endl;
// }

// int main(){
//     node* head=new node(10);
//     insertattail(head,1);
//     insertattail(head,2);
//     insertattail(head,3);
//     // del(head,2);
//     // delestart(head);
//     display(head);
//     return 0;
// }



// reversing a linked list

// iterative method


// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node * next;
//     node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// node * reverse(node * head){
//     node * previous=NULL;
//     node * current=head;
//     node * nextptr;
//     while(current!=NULL){
//         nextptr=current->next;
//         current->next=previous;
//         previous=current;
//         current=nextptr;
//     }
//     return previous;
// }
// void display(node * head){
//     node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<"NULL";
// }
// void insert(node * &head,int val){
//     node * n=new node(val);
//     node * temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=n;
// }

// node * rev(node * head){
//     node * prev = NULL;
//     node * curr = head;
//     node * nextptr;
//     while(curr!=NULL){
//         nextptr=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=nextptr;
//     }
//     return prev;
// }

// int main(){
//     node * head=new node(1);
//     insert(head,2);
//     insert(head,3);
//     insert(head,4);
//     node * newhead=rev(head);
//     display(newhead);
//     return 0;
// }



// recursion method

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node * next;
//     node(int val){
//         data=val;
//         next=NULL;
//     }
// };

// node * rev(node * head){
//     if(head==NULL||head->next==NULL){
//         return head;
//     }
//     node * newhead=rev(head->next);
//     head->next->next=head;
//     head->next=NULL;
//     return newhead;
// }

// void display(node * head){
//     node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }
// void insert(node * &head,int val){
//     node * n=new node(val);
//     node * temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=n;
// }

// int main(){
//     node * head=new node(1);
//     insert(head,2);
//     insert(head,3);
//     insert(head,4);
//     display(head);
//     node * newhead=rev(head);
//     display(newhead);
//     return 0;
// }


// reverse k nodes of a linked list
// done using recursion

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node * next;
//     node(int val){
//         data=val;
//         next=NULL;
//     }
// };

// node * revk(node * &head,int k){
//     node * prev=NULL;
//     node * current=head;
//     node * nextptr;
//     int count=0;
//     while(current!=NULL&&count<k){
//         nextptr=current->next;
//         current->next=prev;
//         prev=current;
//         current=nextptr;
//         count++;
//     }

//     if(nextptr!=NULL){
//         head->next=revk(nextptr,k);
//     }
//     return prev;
// }
// void insert(node * &head,int val){
//     node * temp=head;
//     node * n=new node(val);
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=n;
// }
// void display(node * head){
//     node * temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }

// // node * reverse(node * head,int k){
// //     node * prev=NULL;
// //     node * current=head;
// //     node * nextptr;
// //     int count=0;
// //     while(current!=NULL && count<k){
// //         nextptr=current->next;
// //         current->next=prev;
// //         prev=current;
// //         current=nextptr;
// //         count++;
// //     }
// //     if(nextptr!=NULL){
// //         head->next=reverse(nextptr,k);
// //     }
// //     return prev;
// // }

// node * reversek(node * head,int k){
//     node * previous=NULL;
//     node * current=head;
//     node * nextptr;
//     int count=0;
//     while(current!=NULL && count<k){
//         nextptr=current->next;
//         current->next=previous;
//         previous=current;
//         current=nextptr;
//         count++;
//     }
//     if(nextptr!=NULL){
//         head->next=reversek(nextptr,k);
//     }
//     return previous;
// }

// int main(){
//     node * head=new node(1);
//     insert(head,2);
//     insert(head,3);
//     insert(head,4);
//     insert(head,5);
//     insert(head,6);
//     node * newhead=reversek(head,3);
//     display(newhead);
//     return 0;
// }

// detection and removal of cycle in a linked list

// and removel of cycle

// by floyds algorithm

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node * next;
//     node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// void insert(node * &head,int val){
//     node * n=new node(val);
//     node * temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=n;
// }
// void makecycle(node * &head,int pos){
//     node * temp=head;
//     node * startnode;
//     int count=1;
//     while(temp->next!=NULL){
//         if(count==pos){
//             startnode=temp;
//         }
//         temp=temp->next;
//         count++;
//     }
//     temp->next=startnode;
// }
// bool detectcycle(node * &head){
//     node* slow=head;
//     node* fast=head;
//     while(fast!=NULL && fast->next!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;
//         if(fast==slow){
//             return true;
//         }
//     }
//     return false;
// }
// void remove(node * &head){
//     node * slow=head;
//     node * fast=head;
//     do{
//         slow=slow->next;
//         fast=fast->next->next;
//     }while(slow!=fast);
//     slow=head;
//     while(slow->next!=fast->next){
//         slow=slow->next;
//         fast=fast->next;
//     }
//     fast->next=NULL;
// }
// bool detect(node * head){
//     node * slow=head;
//     node * fast=head;
//     while(fast!=NULL && fast->next!=NULL){
//         slow=slow->next;
//         fast=fast->next;
//         if(fast==slow){
//             return true;
//         }
//     }
//     return false;
// }
// void make(node * &head,int pos){
//     int count=1;
//     node* temp=head;
//     node * start;
//     while(temp->next!=NULL){
//         if(count==pos){
//             start=temp;
//         }
//         temp=temp->next;
//         count++;
//     }   
//     temp->next=start;
// }
// void display(node * head){
//     node* temp=head;
//     while(temp!=0){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     node* head=new node(1);
//     insert(head,2);
//     insert(head,3);
//     insert(head,4);
//     insert(head,5);
//     insert(head,6);
//     makecycle(head,3);
//     remove(head);
//     display(head);
//     cout<<detect(head);

//     return 0;
// }



// add last k nodes to the start of the list

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node * next;
//     node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// void insert(node * &head,int val){
//     node * n=new node( val);
//     node * temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;        
//     }
//     temp->next=n;
// }
// void display(node * head){
//     node * temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// node * app(node* head,int k,int len){
//     node * tail=head;
//     node * newhead;
//     node * newtail;
//     int count=1;
//     while(tail->next!=NULL){
//         if(count==(len-k)){
//             newtail=tail;
//         }
//         if(count==(len-k+1)){
//             newhead=tail;
//         }
//         tail=tail->next;
//         count++;
//     }
//     newtail->next=NULL;
//     tail->next=head;
//     return newhead;
// }

// node * ap(node * head,int k,int l){
//     node * newhead;
//     node * newtail;
//     node * tail=head;
//     int count=1;
//     while(tail->next!=NULL){
//         if(count==l-k){
//             newtail=tail;
//         }
//         if(count==l-k+1){
//             newhead=tail;
//         }
//         count++;
//         tail=tail->next;
//     }
//     newtail->next=NULL;
//     tail->next=head;
//     return newhead;
// }
// int main(){
//     node* head=new node(1);
//     insert(head,2);
//     insert(head,3);
//     insert(head,4);
//     insert(head,5);
//     insert(head,6);
//     node * newhead=ap(head,3,6);
//     display(newhead);
//     return 0;
// }

// find intersection of two linked list

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node * next;
//     node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// void insert(node * &head,int val){
//     node * n=new node( val);
//     node * temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;        
//     }
//     temp->next=n;
// }
// void display(node * head){
//     node * temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int leng(node * head){
//     int l=0;
//     node * temp=head;
//     while(temp!=NULL){
//         temp=temp->next;
//         l++;
//     }
//     return l;
// }
// int inter(node * head1,node * head2){
//     int l1=leng(head1);
//     int l2=leng(head2);
//     int d=0;
//     node * p1;
//     node * p2;
//     if(l1>l2){
//         d=l1-l2;
//         p1=head1;
//         p2=head2;
//     }
//     else{
//         d=l2-l1;
//         p1=head2;
//         p2=head1;
//     }
//     while(d){
//         p1=p1->next;
//         if(p1==NULL){
//             return -1;
//         }
//         d--;
//     }
//     while(p1!=NULL && p2!=NULL ){
//         if(p1==p2){
//             return p1->data;
//         }
//         p1=p1->next;
//         p2=p2->next;
//     }
//     return -1;
// }
// void intersect(node * &head1,node * &head2,int pos){
//     node * temp1=head1;
//     while(pos--){
//         temp1=temp1->next;
//     }
//     node * temp2=head2;
//     while(temp2->next!=NULL){
//         temp2=temp2->next;
//     }
//     temp2->next=temp1;
// }
// int main(){
//     node * head1=new node(1);
//     node * head2=new node(9);
//     insert(head1,2);
//     insert(head1,3);
//     insert(head1,4);
//     insert(head1,5);
//     insert(head1,6);
//     insert(head2,10);
//     intersect(head1,head2,4);
//     cout<<inter(head1,head2)<<endl;
//     display(head1);
//     display(head2);
//     return 0;
// }


// merging two sorted link list and the result must be sorted

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node  * next;
//     node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// void insert(node * &head,int val){
//     node * n=new node( val);
//     node * temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;        
//     }
//     temp->next=n;
// }
// void display(node * head){
//     node * temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// node * mer(node  * head1,node * head2){
//     node * p1=head1;
//     node * p2=head2;
//     node * dummy=new node(-1);
//     node * p3=dummy;
//     while(p1!=NULL && p2!=NULL){
//         if(p1->data<p2->data){
//             p3->next=p1;
//             p1=p1->next;
//         }
//         else {
//             p3->next=p2;
//             p2=p2->next;
//         }
//         p3=p3->next;
//     }
//     while(p1!=NULL){
//         p3->next=p1;
//         p1=p1->next;
//         p3=p3->next;
//     }
//     while(p2!=NULL){
//         p3->next=p2;
//         p2=p2->next;
//         p3=p3->next;
//     }
//     return dummy->next;
// }

// node * mergerecur(node * &head1,node * &head2){
//     if(head1==NULL){
//         return head2;
//     }
//     if(head2==NULL){
//         return head1;
//     }
//     node * result;
//     if(head1->data<head2->data){
//         result=head1;
//         result->next=mergerecur(head1->next,head2);
//     }
//     else{
//         result=head2;
//         result->next=mergerecur(head1,head2->next);
//     }
//     return result;
// }



// node * merg(node * head1,node * head2){
//     node * p1=head1;
//     node * p2=head2;
//     node * dummy=new node(-1);
//     node * p3=dummy;
//     while(p1!=NULL && p2!=NULL){
//         if(p1->data<p2->data){
//             p3->next=p1;
//             p1=p1->next;
//         }
//         else{
//             p3->next=p2;
//             p2=p2->next;
//         }
//         p3=p3->next;
//     }
//     while (p1!=NULL)
//     {
//         p3=p1;
//         p3=p3->next;
//         p1=p1->next;
//     }
//     while (p2!=NULL)
//     {
//         p3=p2;
//         p3=p3->next;
//         p2=p2->next;
//     }
//     return dummy->next;
// }

// node * recursion(node * head1,node * head2){
//     if(head1==NULL){
//         return head2;
//     }
//     if(head2==NULL){
//         return head1;
//     }
//     node * result;
//     if(head1->data<head2->data){
//         result=head1;
//         result->next=recursion(head1->next,head2);
//     }
//     else{
//         result=head2;
//         result->next=recursion(head1,head2->next);
//     }
//     return result;
// }

// int main(){
//     node * head1=new node(1);
//     node * head2=new node(2);
//     insert(head1,4);
//     insert(head1,5);
//     insert(head1,7);
//     insert(head2,3);
//     insert(head2,6);
//     display(head1);
//     display(head2);
//     // node * merge=mer(head1,head2);
//     node * merge=recursion(head1,head2);
//     display(merge);
//     return 0;
// }

// put odd pos first and even after

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// void insert(node * &head,int val){
//     node * n=new node( val);
//     node * temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;        
//     }
//     temp->next=n;
// }
// void display(node * head){
//     node * temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// node * oddeven(node * &head){
//     node * temp=head;
//     node * odd=temp;
//     node * even=temp->next;
//     node * evenstart=temp->next;
//     while(odd!=NULL && even!=NULL){
//         odd->next=even->next;
//         odd=odd->next;
//         even=odd->next;
//         even=even->next;
//     }
//     odd->next=evenstart;
//     if(odd->next!=NULL){
//         even->next=NULL;
//     }
//     return head;
// }
// int main(){
//     node*  head=new node(1);      
//     insert(head,2);
//     insert(head,3);
//     insert(head,4);
//     insert(head,5);
//     insert(head,6);
//     node * newhead=oddeven(head);
//     display(newhead);
//     return 0;
// }






