  int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int>st;
        for(int i = 0;i<n;i++){
            st.push(i);
        }
        while(st.size()>1){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            if(M[a][b]==1){
                st.push(b);
            }else{
                st.push(a);
            }
        }
        
        //verify 
        int index = st.top();
        bool row = false;
        int zero = 0;
        for(int i = 0;i<n;i++){
            if(M[index][i]==0){
                zero++;
            }
        }
        if(zero==n)
       { row = true;}
        
        int one = 0;
        bool col = false;
        for(int i = 0;i<n;i++){
            if(M[i][index]==1){
              one++;
            }
        }
        if(one == n-1)
        col = true;
        
        if(row == true && col == true){
            return index;
        }else{
            return -1;
        }
    }