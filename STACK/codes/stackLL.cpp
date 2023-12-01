#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *link;
    node(int data)
    {
        this->data = data;
        this->link = NULL;
    }
};

class stack1
{
public:
    node *top;

    stack1()
    {
        top = NULL;
    }

    void push(int data)
    {
        node *temp = new node(data);
        if (!temp)
        {
            cout << "stack is overflown " << endl;
            exit(1);
        }
        temp->data = data;
        temp->link = top;
        top = temp;
    }

    bool isempty()
    {
        if (top == NULL)
        {
            return true;
        }
        return false;
    }

    int peek()
    {
        node *temp = top;
        if (isempty())
        {
            return {-1};
        }
        else
        {
            return temp->data;
        }
    }
    void pop()
    {
        node *temp;
        if (top == NULL)
        {
            cout << "stack is under flown " << endl;
            exit(1);
        }
        else
        {
            temp = top;
            top = temp->link;
            free(temp);
        }
    }

    void display(){
        node*temp;
        if(top== NULL){
            cout<<"stack is overflown "<<endl;
        }else{
            temp= top;
            while(temp!=NULL){
                cout<<temp->data;
                temp=temp->link;
                if(temp!=NULL)
                cout<<"->";
            }
            cout<<endl;
        }
    }
};

int main()
{
    stack1 st;

    st.push(10);
    st.push(76);
    st.push(87);
    st.push(90);
    st.push(23);
    st.push(12);
    st.push(11);
    st.display();

    st.pop();
    int peek = st.peek();
    cout << "peek element " << peek << endl;

    st.pop();
    st.display();

    return 0;
}