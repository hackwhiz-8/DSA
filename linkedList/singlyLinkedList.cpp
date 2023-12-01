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

void deletion(int position, Node12 *&head, Node12 *&tail)
{
    if (position == 1)
    {
        Node12 *temp = head;
        head = head->next;
        // memory free for starting node
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting from middle node or last node
        Node12 *curr = head;
        Node12 *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        if (prev->next == NULL)
        {
            tail = prev;
        }
    }
}


int position(Node12*head){
    cout<<"position "<<endl;
  Node12*temp=head;
    Node12*curr = head;
    Node12*prev=NULL;
    int pos=0;
    while(temp->next!=NULL){
        if(prev->data==curr->data){
            return pos;
        }
       pos++;
       prev=curr;
       curr=curr->next;
       temp=temp->next;
    }
    
}
Node12 *removeDuplicates(Node12 *&head)
{
    cout<<"hello world "<<endl;
    // your code goes here
    int length = position(head);
    cout<<length<<endl;
    if (length == 1)
    {
        Node12 *temp = head;
        head = head->next;
        // memory free for starting node
        temp->next = NULL;
        delete temp;
       
    }
    
  else {
      Node12*curr=head;
      Node12*prev=NULL;
      Node12*temp=head;
      Node12*forward=NULL;
      while(temp!=NULL){
          if(prev->data==curr->data){
              forward=curr;
              prev->next=curr->next;
              curr=curr->next->next;
              forward->next=NULL;
          }
          prev=curr;
          curr=curr->next;
          temp=temp->next;
      }
      
  }
  return head;
 
}

//detect loop 
bool detectLoop(Node12*head){
    if(head==NULL)
    return false;
    Node12*temp =head ;
    map<Node12*,bool>visited;
    while(temp!=NULL){
         if(visited[temp]==true){
            return true ;
         }
         visited[temp]=true;
         temp=temp->next;
}
    return false ;

}
Node12* floyd(Node12*head){
    if(head==NULL)
    return NULL;
    Node12*slow = head;
    Node12*fast=head;

    while(slow!=NULL && fast!=NULL){
        
        slow = slow->next;
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        if(slow==fast){
            
        return slow;
        }
    }
    return NULL;
}
Node12* startingNode(Node12*head){
    Node12*intersection=floyd(head);
    Node12*slow = head ;
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}
void removeLoop(Node12*head){
    if(head==NULL)
    return;
    Node12* temp=startingNode(head);
    while(temp->next!=startingNode(head)){
        temp=temp->next;
    }
    temp->next=NULL;
}

int main()
{
    Node12 *node1 = new Node12(2);
    //  cout<<node1->data<<endl;
    //  cout<<node1->next<<endl;

    Node12 *head = node1;
    Node12 *tail = node1;
    print(head);

    insertAtTail(tail, 12);

    insertAtTail(tail, 15);
    insertAtMiddle(head, tail, 3, 2);
    insertAtMiddle(head, tail, 3, 2);
    insertAtMiddle(head, tail, 1, 2);
    insertAtMiddle(head, tail, 6, 13);
    print(head);
    tail->next=head->next;
         

    /*if(detectLoop(head)){
      cout<<"loop present "<<endl;
    }
    else{
        cout<<"loop not present "<<endl;
    }*/

   if(floyd(head)!=NULL){
      cout<<"loop present floyd  "<<endl;
    }
    else{
        cout<<"loop not present "<<endl;
    }

    Node12* loop = startingNode(head);
    cout<<"loop start with "<<loop->data<<endl;

    removeLoop(head);
    print(head);
   if(detectLoop(head)){
      cout<<"loop present "<<endl;
    }
    else{
        cout<<"loop not present "<<endl;
    }
      if(floyd(head)!=NULL){
      cout<<"loop present floyd  "<<endl;
    }
    else{
        cout<<"loop not present floyd"<<endl;
    }


    /* head = removeDuplicates(head);
     print(head);
     cout<<head->data<<endl;
     */
    return 0;
}