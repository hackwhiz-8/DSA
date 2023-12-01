 //only code 
 int maxLength(string s){
         stack<int>st;
        st.push(-1);
        int count = 0;
        for(int i = 0;i<s.size();i++){
            
           int newCount=0;
           
           if(s[i]=='('){
               st.push(i);
               
           }
           else{
                st.pop();
                if(!st.empty()){
                    count = max(count,(i-st.top()));
                }else{
                    st.push(i);
                }
           }
           
         
        }
        return count;
    }

    /*
    algo 
    ->first transverse through string 
    -> if element is open bracket normally push in stack
    ->if close bracket then check if stack is not empty normally pop() and return the index diffrence 
    i-stacktop()

    */