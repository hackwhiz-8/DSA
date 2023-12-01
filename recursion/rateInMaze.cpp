#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 \
bool issafe(int x,int y,int n,vetcor<vector<int>> visited ,vector<vector<int>>){
    if((visited[x][y]==0) && (x>=0 && x<n)&& (y>=0 && y<n) && m[x][y]==1 ){
        return true;
    }
    return false;
}
void solve(vector<vector<int>>&m,int n,int X,int Y,vector<vector<int>> visited,string path,vector<string>ans){
    //base case               
    if(X==n-1 && Y = n-1){
        ans.push_back(path);
        return 
    }
    
    visited[x][y]==1;
    //down 
    int newX = X+1;
    int newY = y;
  if(issafe(newX,newY,n,visited,m)){
      path.push_back('D');
      solve(m,n,newX,newY,visited,path,ans);
      path.pop_back();
  }
   //let
    int newX = X;
    int newY = y-1;
  if(issafe(newX,newY,n,visited,m)){
      path.push_back('D');
      solve(m,n,newX,newY,visited,path,ans);
      path.pop_back();
  }
   //right 
    int newX = X;
    int newY = y+1;
  if(issafe(newX,newY,n,visited,m)){
      path.push_back('D');
      solve(m,n,newX,newY,visited,path,ans);
      path.pop_back();
  }
    //up 
    int newX = X-1;
    int newY = y;
  if(issafe(newX,newY,n,visited,m)){
      path.push_back('D');
      solve(m,n,newX,newY,visited,path,ans);
      path.pop_back();
  }
  visited[X][Y]==0;
    
}


vector<vector<int>> findPath(vector<vector<int>> &m,int n){
    vector<string> ans;

    if(m[0][0]==0){
        return ans;
    }
    vector<vector<int>> visited = m;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;i++){
            cin>>visited[i][j] = 0;
        }
    }
    int srcX = 0;
    int srcY = 0;
    
    string path = "";
    solve(m,n,srcX,srcY,visited,path,ans);
    return ans;
}

int main(){
   vector<vector<int>> m[3][3];
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cin>>m[i][j];
        }
    }
    vector<string> ans = findPath(m,3);
    for(int i = 0;i<ans.size();i++){
        
           cout<<ans[i]<<" ";
        
    }
           
    return 0;
}