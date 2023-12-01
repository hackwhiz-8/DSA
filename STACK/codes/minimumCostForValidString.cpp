  vector<int> nextEle(long long arr[],int n){
    stack<int>st;

     vector<int >ans(n);
     st.push(-1);
     for(int i = n-1;i>=0;i--){
        
         while(arr[st.top()]>=arr[i] && st.top()!=-1){
            cout<<st.top()<<endl;
             st.pop();
         }
         ans[i]=st.top();
        st.push(i); 
     }
    // reverse(ans.begin(),ans.end());
     return ans;
    }
    
    vector<int>prevEle(long long  arr[],int n){
           stack<int  >st;

     vector<int >ans(n);
     st.push(-1);
     for(int i =0;i<n;i++){
        
         while(arr[st.top()]>=arr[i] && st.top()!=-1){
            
             st.pop();
         }
         ans[i]=st.top();
        st.push(i); 
     }
    
     return ans;
    }

     vector<int >next;
       next = nextEle(arr,n);
         vector<int >prev;
         prev = prevEle(arr,n);
         long long area = INT_MIN;
         for(int i = 0;i<n;i++){
             long long l = arr[i];
             if(next[i]==-1){
                 next[i]=n;
             }
             long long b = next[i]-prev[i] -1;
             
             long long newarea = l*b;
             
             area = max(newarea,area);
         }
         return area;