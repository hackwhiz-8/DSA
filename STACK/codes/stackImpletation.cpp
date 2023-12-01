#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// STACK IMPLETATION
class stack1
{
private:
public:
    int size;
    int *arr;
    int top;
    stack1(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack is overflown " << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack is underflown " << endl;
        }
    }

    int peek()
    {
        if (top >= 0 && top < size)
        {
            return arr[top];
        }
        else
        {
            cout << "stack is empty" << endl;
            return -1;
        }
    }
    bool isempty()
    {
        if (top < 0)
        {
            cout << "stack is empty mere dost  " << endl;
            return true;
        }
        else
        {
            cout << "stack is not empty" << endl;
            return false;
        }
    }
};

int main()
{
    stack1 st(5);
    st.push(22);
    st.push(11);
    st.push(33);
    st.push(44);
    st.push(33);
    st.push(44);

    cout << "top element " << st.peek() << endl;

    st.pop();
    cout << "top element " << st.peek() << endl;
    st.pop();
    cout << "top element " << st.peek() << endl;
    st.pop();
    cout << "top element " << st.peek() << endl;

    if (st.isempty())
    {
        cout << "stack is empty mere dost " << endl;
    }
    else
    {
        cout << "stack is not empty " << endl;
    }

    return 0;
}