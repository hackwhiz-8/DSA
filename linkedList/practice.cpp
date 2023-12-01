#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }
};

void insertion(node *&head, int d)
{
    node *newnode = new node(d);
    newnode->next = head;
    head = newnode;
}

void tailinsert(node *&tail, int d)
{  
    node *newnode = new node(d);
    tail->next=newnode;
    tail=newnode;
}

void atmiddle(node* &head,node*&tail,int position,int d){

    if(position==1){
        insertion(head,d);
        return ;
    }
    int count = 1;
    node*curr = head;
    while(count<position-1){
        
         curr=curr->next;
         count++;
    }
    if(curr->next==NULL){
        tailinsert(tail,d);
        return;
    }
    node* newnode = new node(d);
     newnode->next=curr->next;
     curr->next=newnode;

}

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deletion(node*head,int position){
    if(position==1){
        node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    int count = 1;
    node*temp = head;
    node*prev=NULL;

    while(count<position){
        prev=temp;
        temp=temp->next;
        count++;
    }
    prev->next=temp->next;
    temp->next=NULL;
    delete temp;
    
}

int main()
{

    node *n1 = new node(10);
    node *head = n1;
    node*tail = n1;

    insertion(head, 11);
    print(head);

    tailinsert(tail, 45);
    print(head);
    tailinsert(tail, 35);
    print(head);
    tailinsert(tail, 12);
    print(head);
    atmiddle(head,tail,2,90);
    print(head);

    deletion(head,4);
    print(head);
    return 0;
}
