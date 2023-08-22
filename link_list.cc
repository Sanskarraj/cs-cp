#include<bits/stdc++.h>
using namespace std;



class node{
public:
     int data;
     node* next;
     
     node(int data){
        this->data=data;
        next=NULL;
     }
};

void insertAtHead(node * &head,int data){
     if(head==NULL){
           head= new node(data);
           return;
     }
     node * n= new node(data);
     n->next=head;
     head=n;
}

void printLL(node * head){
while(head!=NULL)cout<<head->data<<" ",head=head->next;
}

void insertAt(int k,node*head,int data){
     node*n=new node(data);
     for(int i=1;i<k;i++){
           head=head->next;
     }
     n->next=head->next;
     head->next=n;
}

int main(){
node* head=NULL;
  insertAtHead(head,4);
  insertAtHead(head,5);
  insertAtHead(head,6);
  insertAtHead(head,8);
  insertAtHead(head,9);
  insertAtHead(head,10);
  insertAt(3,head,7);
printLL(head);
}
