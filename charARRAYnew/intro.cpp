#include<iostream>
#include<bits/stdc++.h>
using namespace std;

char tolowerCase(char name){

    if(name >= 'a' && name <= 'z'){
       return name;
    }
    else{
        char temp = name  -'A'+'a';
        return temp;
    }

}

char toupperCase(char name){

    if(name >= 'A' && name <= 'Z'){
       return name;
    }
    else{
        char temp = name  -'a'+'A';
        return temp;
    }

}
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int s=0;
	    int e=S.length()-1;
	    while(s<e){
	        if(tolowerCase(S[s])!=tolowerCase(S[e])){
	            return {0};
	        }
	        else{
	            s++;
	            e--;
	        }
	    }
	    return {1};
	}

void reverse(char name[],int n){
    int s  = 0;
    int e = n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getLength(char name[]){
int count=0; 
    for(int i = 0;name[i]!='\0';i++){
        count++;
    } 
    return count;      
}

int main(){

    char name[20];
    cin>>name;
    // name[3]='\0';//this will change the value at third index with null character that terminate the proccess
    cout<<name<<endl;

    //length of string
    int length=getLength(name);
    cout<<length<<endl; 


    //reverse a string 
    reverse(name ,length);
    cout<<name<<endl;

    //ToLowerCase 

    cout<<"to lower case "<<tolowerCase('M')<<endl;

    //to upper case

    cout<<"to upper  case "<<toupperCase('m')<<endl;
    

    //chk palindrome 
    cout<<"palindrome or not "<<isPalindrome(name)<<endl;//string can take char type 

    
    return 0;
}