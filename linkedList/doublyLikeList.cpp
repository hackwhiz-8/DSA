#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free with data "<<value<<endl;
    }
};

// gives length
int length(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

// inserthead
void insertAthead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
       
    }
}

void insertAtTail(Node *&head, Node *&tail, int d)
{
        Node *temp = new Node(d);
    if (tail == NULL)
    {
        
        tail = temp;
        head = temp;
    }
    else
    {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
        temp->next = NULL;
    }
}
 
 
void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    Node *temp = head;
    if (position == 1)
    {
        insertAthead(head, tail, d);
        return;
    }
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(head, tail, d);
        return;
    }
    Node *newnode = new Node(d);
    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
    newnode->prev = temp;
}

void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deletion(int position, Node *&head, Node *&tail)
{
    if (position == 1)
    {
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting from middle node or last node
        Node *curr = head;
        Node *preEle = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            preEle = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev=NULL;
        preEle->next=curr->next;
        // curr->next->prev=preEle;
        curr->next=NULL;
        delete curr;
        if (preEle->next == NULL)
        {
            tail = preEle;
        }
    }
}

int main()
{
    Node*node1=new Node(10);

    Node *head =node1; 
    Node *tail = node1;

    insertAthead(head, tail, 12);
    print(head);
    cout << "length " << length(head) << endl;
    insertAthead(head, tail, 40);
    print(head);
    cout << "length " << length(head) << endl;
    insertAthead(head, tail, 13);
    print(head);
    cout << "length " << length(head) << endl;
    insertAthead(head, tail, 14);
    print(head);
    cout << "length " << length(head) << endl;
    insertAtTail(head, tail, 20);

    print(head);
    cout << "length " << length(head) << endl;

    insertAtPosition(head, tail, 3, 100);
    print(head);
    cout << "length " << length(head) << endl;

    insertAtPosition(head, tail, 1, 101);
    print(head);
    cout << "length " << length(head) << endl;

    insertAtPosition(head, tail, 8, 102);
    print(head);
    cout << "length " << length(head) << endl;

    deletion(3,head,tail);
    print(head);
    deletion(3,head,tail);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    
    return 0;
}