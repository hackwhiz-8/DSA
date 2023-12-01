void push(stack<int>& st, int a){
	// Your code goes here
st.push(a);
	
}

bool isFull(stack<int> &st,int n){
	// Your code goes here
     if(st.size()==n){
         return true;
     }
     return false;
}

bool isEmpty(stack<int>& st){
	// Your code goes here
	if(st.empty()){
	    return true;
	}else{
	    return false;
	}
}

int pop(stack<int>& st){
    if(st.empty()){
        return -1;
    }
   else{
       int k = st.top();
       st.pop();
       return k;
   }
}

int getMin(stack<int>& st){
       int minEle = st.top();
       while(!st.empty()){
         if(st.top()<minEle){
             minEle=st.top();
         }      
         st.pop();
     }
     return minEle;
}