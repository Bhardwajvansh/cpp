// coubly linked list  node ---> previous | data | Next

#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node * previous;
    node(int val){
        data=val;
        next=NULL;
        previous=NULL;
    }
};
void insert(node * &head,int val){
    node  * n=new node(val);
    node * temp=head;
    while(temp->next=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->previous=temp;
}
void display(node * head){
    node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void inserthead(node * &head,int val){
    node * n=new node( val);
    n->next=head;
    if(head!=NULL){
        head->previous=n;
    }
    head=n;
}
void del(node * head,int val){
    node * temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node * todel=temp->next;
    temp=temp->next->next;
    delete todel;
}
int main(){
    node * head=new node(1);
    insert(head,3);
    inserthead(head,0);
    del(head,3);
    display(head);
    return 0;
}