class Solution {
public:
    int kthSmallest(vector<vector<int>>& nums, int k) {
        int n = nums.size();

        vector<int > ans;
        for(int i= 0;i<n;i++){
            for(int j = 0;j< nums[i].size() ;j++){
                ans.push_back(nums[i][j]);
            }
        }
        sort(ans.begin() , ans.end());
        return ans[k - 1];
    }
};