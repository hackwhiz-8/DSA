//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    Node *next;
    Node *arb;

    Node(int x) {
        data = x;
        next = NULL;
        arb = NULL;
    }
};



// } Driver Code Ends
class Solution
{
    void insert(Node*&head,Node*&tail,int d){
        Node* newNode = new Node(d);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return ;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    public:
    Node *copyList(Node *head)
    {
        Node* cnHead = NULL;
        Node* cnTail = NULL;
        Node* temp = head;
        while(temp!=NULL){
            insert(cnHead,cnTail,temp->data);
            temp=temp->next;
        }
        
        unordered_map<Node*,Node*>newNode;
        
        Node* temp1 = head;
        Node*temp2 = cnHead;
        while(temp1 != NULL){
            newNode[temp1] = temp2;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        temp1 = head;
        temp2 = cnHead;
        while(temp1!=NULL){
            temp2->arb = newNode[temp1->arb];
            temp1= temp1->next;
            temp2 = temp2->next;
        }
        return cnHead;
    }

};

//{ Driver Code Starts.

//approach 2


  void insert(Node*&head ,Node*&tail,int d){
        Node * newNode = new Node(d);
        
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    public:
    Node *copyList(Node *head)
    {
        //Write your code here
        //create a clone node 
        
        Node* cloneH = NULL;
        Node* cloneT = NULL;
        Node*temp = head ;
        while(temp!=NULL){
            insert(cloneH,cloneT,temp->data);
            temp = temp->next;
        }
        
        //add clone list in between original node 
        Node* og = head;
        Node* cl = cloneH;
        
        while(og  !=  NULL && cl != NULL){
            //for og 
            Node* next = og->next;
            og->next = cl;
            og = next;
            //for cl
            next = cl->next;
           cl->next = og;
           cl = next;
        }
        
        //random pointer copy 
        Node* curr = head ;
     
        while(curr!=NULL){
            
          if(curr->next!=NULL){
              curr->next->arb = curr->arb
              ? curr->arb->next :curr->arb;
          }
          curr= curr->next->next;
        }
        
        
        //revert
         og = head;
         cl = cloneH;
         
           
        while(og!=NULL && cl != NULL){
            //for og 
           
            og->next = cl->next;
            og = og->next;
            //for cl
           if(og!=NULL)  { 
               cl->next = og->next;
            }
           cl = cl->next;

        }
        
        return cloneH;
        
    }
