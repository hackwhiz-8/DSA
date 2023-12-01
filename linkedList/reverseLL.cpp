#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node12
{
public:
    int data;
    Node12 *next;
    Node12(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node12()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is deleted for node with data " << value << endl;
    }
};

// insertion from first postion or from head
void insertAthead(Node12 *&head, int a)
{
    Node12 *temp = new Node12(a);
    temp->next = head;
    head = temp;
}
//-------------------------------------------------------------
// insertion at tail or last
void insertAtTail(Node12 *&tail, int d)
{
    Node12 *temp = new Node12(d);
    tail->next = temp;
    tail = temp;
}
//-------------------------------------------------------------
// insertion at middle
void insertAtMiddle(Node12 *&head, Node12 *&tail, int position, int d)
{
    Node12 *temp = head;
    if (position == 1)
    {
        insertAthead(head, d);
        return;
    }

    if (tail->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;//node just before insertion 
        
        cnt++;
    }
    // creating a Node
    Node12 *nodetoinsert = new Node12(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}
//--------------------------------------------------------------

// transverse through the linkList
void print(Node12 *&head)
{
    Node12 *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        // cout << temp->next << " ";
        temp = temp->next;
    }
    cout << endl;
}

// deletion

//iterative method 

Node12* reverseLL(Node12* head){

    if(head == NULL || head->next == NULL){
        return head;
    }
    Node12*prev=NULL;
    Node12*curr=head;
    while(curr!=NULL){
        Node12*forward = curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
   
    return prev;
}

// Node12* reverseRecursion(Node12*head){
//       if(curr == NULL){
//         head = prev;
//         return;
//     }

     

//     Node12* = reverseRecursion(head->next);

// }

int main()
{
    Node12 *node1 = new Node12(10);
    //  cout<<node1->data<<endl;
    //  cout<<node1->next<<endl;

    Node12 *head = node1;
    Node12 *tail = node1;
    print(head);

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 15);
    print(head);
    insertAtMiddle(head, tail, 3, 20);
    print(head);
    insertAtMiddle(head, tail, 3, 21);
    print(head);
    insertAtMiddle(head, tail, 1, 11);
    print(head);
    insertAtMiddle(head, tail, 6, 13);
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

   head =  reverseLL(head);
    print(head);
    



    return 0;
}

//time complexity = O(n);
//space complexity =O(1);