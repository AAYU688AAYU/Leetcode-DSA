class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n  = nums.size();
        vector<int> ans;

        for(int i = 0;i<n;i++){
            for(int j = i+1;j < n;j++){
                int x = nums[i] + nums[j];
                if(x == target){
                    return {i , j};
                }
            }
        }
        return {};
    }
};