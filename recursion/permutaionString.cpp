#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> nums, int index, vector<vector<int>> &ans)
{
   
    // base case
    if (index >=nums.size() )
    {
        ans.push_back(nums);
        return;
    }

    for (int i = index; i < nums.size(); i++)
    {
        swap(nums[index], nums[i]);
        solve(nums, index + 1, ans);
        swap(nums[index], nums[i]);
    }
}

vector<vector<int>> permutation(vector<int>& nums)
{
    vector<vector<int>> ans;
    int index = 0;
    solve(nums, index, ans);
    return ans;
}

int main()
{
 vector<int> nums = {1,2,3};

    vector<vector<int>> ans = permutation(nums);
    for(int i = 0;i<nums.size();i++){
        for(int j = 0;j<nums.size();i++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}