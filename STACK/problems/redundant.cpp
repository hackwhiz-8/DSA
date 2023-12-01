#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool solve(string str ){
    stack <char>st;   
    for(int i = 0;i<str.length();i++){
        char ch = str[i];
        if((ch=='(') || (ch=='+')||(ch=='-')||(ch=='/')||(ch=='*'))
        {
            st.push(ch);
        }else{
            if(ch==')'){
               bool redu = true;
             char top = st.top();
             while(st.top() != '('){
                    if((top=='+')||(top=='-')||(top=='/')||(top=='*'))
                    redu = false;

                    st.pop();
             }
             if(redu==true)
               return true;
               st.pop();
            }
        } 

    }
    return false;
}

int main(){

    string str="(((((a+b))))vb";

    solve(str);

    if(solve(str)){
        cout<<"given pair is redudant "<<endl;
    }else{
        cout<<"given pair id is not redudant "<<endl;
    }
            
    return 0;
}