int getLength(Node*head){
        int len=0;
        while(head!=NULL){
            len++;
            head=head->next;
        }
        return len;
    }
    int nth(Node*head ,int pos){
        int count =1;
        Node*temp = head ;
        while(count<pos){
            temp=temp->next;
            count++;
        }
        return temp->data;
    }
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
     int len = getLength(head);
     int s = 1;
     int e = len;
     Node*temp=head;
     while(s<e){
         int first=temp->data;
         int last = nth(head,e);
         if(first!=last){
             return 0;
         }else{
             s++;
             temp=temp->next;
             e--;
         }
    }
    return 1;
    }