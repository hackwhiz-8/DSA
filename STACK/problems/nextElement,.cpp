//only code 
vector<int>nextEle(int *arr,int n){
        
        stack<int>st;
       vector<int>ans(n);
        st.push(-1);
        for(int i = n-1;i>=0;i--){
            while(arr[st.top()] >= arr[i] && st.top()!=-1){
                st.pop();
            }
            ans[i]= st.top();
            st.push(i);
        }
    return ans;
    }
    vector<int> prevEle(int *arr,int n){
        
        stack<int>st;
        vector<int> ans(n);
        st.push(-1);
        for(int i = 0;i<n;i++){
            while(arr[st.top()] >= arr[i] && st.top()!=-1){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
    return ans;
    }