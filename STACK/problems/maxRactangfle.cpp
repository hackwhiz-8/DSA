//only code 

class Solution{
    
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
    
    int largestArea(int *arr,int n){
        vector<int> next(n);
        next = nextEle(arr,n);
        vector<int>prev(n);
        prev = prevEle(arr,n);
        
        int area = INT_MIN;
        
        for(int i = 0;i<n;i++){
            int l = arr[i];
            if(next[i]==-1){
                next[i]= n;
                }
                int b = next[i]-prev[i]-1;
                int newArea = l*b;
                area = max(area,newArea);
        }
        return area;
    }

  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        int area = largestArea(M[0],m);
        for(int i = 1;i<n;i++){ 
            
            for(int j = 0;j<m;j++){
                if(M[i][j]!=0){
                    M[i][j]=M[i][j]+M[i-1][j];
                }else{
                    M[i][j]=0;
                }
                
            }
                area = max(area,largestArea(M[i],m));
        }
        return area;
        
    }
}