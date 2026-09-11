class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(vector<int>& curr, vector<int>& nums, int idx, int n){
        ans.push_back(curr);
        for(int i=idx; i<n; ++i){
            curr.push_back(nums[i]);
            backtrack(curr,nums,i+1,n);
            curr.pop_back();
        }
    
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> curr;
        backtrack(curr, nums, 0, nums.size());
        return ans;
    }
};