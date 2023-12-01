#include<iostream>
using namespace std;

string spaceRemove(string s){
    for(int i = 0;i<s.size();i++){
        if(s[i]==' '){
            s.push_back('#');
        }
    }
    return s;
}

int main(){
    string s;
    getline(cin,s);
    cout<<spaceRemove(s);
    cout<<s<<endl;
    return 0;
}