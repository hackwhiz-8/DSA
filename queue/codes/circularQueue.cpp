#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class queue1
{
    int *arr;
    int size;
    int front;
    int rear;

public:
    queue1(int n)
    {
        this->size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int x)
    {
        if ((front == 0 && rear == size - 1) || rear == (front - 1) % (size - 1))
        {
            cout << "queue is full " << endl;
        }
        else if (front == -1)
        {
            front = 0;
            rear = 0;
            arr[rear] = x;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = x;
        }
        else
        {
            rear++;
            arr[rear] = x;
        }
    }

    void pop()
    {
        if (front == -1 && rear == -1)
        {
            cout << "queue is empty " << endl;
        }
        else if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }

    void display(){
        cout<<"front "<<arr[front]<<endl;
    }
};

int main()
{
    queue1 q1(6);
    q1.push(8);
    q1.push(7);
    q1.push(45);
    q1.push(3);
    q1.push(1);
    q1.display();
    q1.pop();
    q1.display();
    q1.pop();
    q1.display();
    return 0;
}


 struct Node* reverse(struct Node* head ){
        struct Node*prev=NULL;
        struct Node* curr=head;
        while(curr!=NULL){
            struct Node*forward = curr;
            curr->next=prev;
            prev= curr;
            curr=forward;
        }
        return prev;
    }
    int length(struct Node*head){
        int count = 1;
        struct Node*temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    
    void add(struct Node*&primary,struct Node*&sndry,int carry){
        int sum =0;
        while(primary!=NULL && carry==1){
            sum=(primary->data) +(sndry->data);
            carry = 0;
            if(sum==10){
                primary->data=0;
                carry=1;
            }else{
                primary->data=sum;
            }
            primary=primary->next;
            sndry=sndry->next;
        }
    }
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        if(first->next==NULL && second->next==NULL){
            first->data+=second->data;
            return first;
        }
        int len_first=length(first);
        int len_second=length(second);
        
        first  = reverse(first);
        second = reverse(second);
        
        
        struct Node*temp1=first;
        struct Node*temp2=second;
        int carry=1;
        
        if(len_first>len_second){
            add(temp1,temp2,carry);
        }else{
            add(temp2,temp1,carry);
        }
        struct Node* main_head ;
        if(len_first>len_second){
            main_head = first;
        }else {
            main_head=second;
        }
        if(carry==1){
            struct Node* newNode=new Node(1);
            struct Node* ans = reverse(main_head);
            newNode->next=ans;
            ans=newNode;
            return ans;
        }
        struct Node*ans = reverse(main_head);
        return ans;
    }