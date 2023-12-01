
    while(i<s2.length() ){
        char newChar = s2[i];
        int index = newChar -'a';
        count2[index]++;
        char oldChar = s2[i-windowSize];
        index=oldChar-'a';
        count2[index]--;
       i++;
     if(checkEqual(count1,count2))
      return 1;
    }
  

    return 0;
}

int main(){
    string s1="ab";
    string s2;

   getline(cin,s2);
   