#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
             next=NULL;
        }
        cout << "the memoery has been released with data " << value << endl;
    }
};

void insertAtHead(Node *&tail, int element, int d)
{
    // assuming that lement is present in list
    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }

    else
    {
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(Node *tail) 
{
    Node *temp = tail;
    if(tail== NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    do
    {
        cout << tail->data << " ";
        tail= tail->next;
    } while (tail != temp);
    cout << endl;
}

void deletion(Node* &tail, int value)
{
    // empty list
    if (tail == NULL)
    {
        cout << "list is empty check it again " << endl;
        return;
    }
    else
    {
        // non-empty
        // assuming that "value "is present in the linked list
        Node *prev = tail;
        Node *curr = prev->next;
        while(curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        
        prev -> next = curr -> next;
       
        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;
    }
}

int main()
{

    Node *tail = NULL;
    insertAtHead(tail, 1, 3);
    print(tail);
    insertAtHead(tail, 3, 101);
    print(tail);
    insertAtHead(tail, 101, 102);
    print(tail);

    deletion(tail, 3);
    print(tail);
     deletion(tail, 101);
    print(tail);
     deletion(tail, 102);
    print(tail);
    print(tail);

    return 0;
}