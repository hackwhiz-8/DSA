#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class stack1
{
public:
    int size;
    int top1;
    int top2;
    int *arr;

    stack1(int size)
    {
        this->size = size;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }
    void push1(int element)
    {
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = element;
        }
        else
        {
            cout << "stack is overflown " << endl;
        }
    }
    void push2(int element)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = element;
        }
        else
        {
            cout << "stack is overflown " << endl;
        }
    }
    void pop1()
    {
        if (top1 >=0)
        {
            int k = arr[top1];
            top1--;
            cout<<k<<endl;
        }
        else
        {
            cout << "stack is underflown " << endl;
        }
    }
    void pop2()
    {
        if (top2 < size)
        {
            top2++;
        }
        else
        {
            cout << "stack is underflown " << endl;
        }
    }
     int peek1()
    {
        if (top1 >= 0 && top1 < size)
        {
            return arr[top1];
        }
        else
        {
            cout << "stack is empty" << endl;
            return -1;
        }
    }
     int peek2()
    {
        if (top2 >top1 && top2 <= size)
        {
            return arr[top2];
        }
        else
        {
            cout << "stack is empty" << endl;
            return -1;
        }
    }
};

int main()
{
    stack1 st(7);
    st.push1(11);
    st.push2(22);
    st.push1(10);
    st.push2(21);
    st.push1(1);
    st.push2(222);
    st.push1(33);
    st.push2(99);
    cout<<"peek first "<<st.peek1()<<endl;
    cout<<"peek second "<<st.peek2()<<endl;
    st.pop1();


    return 0;
}