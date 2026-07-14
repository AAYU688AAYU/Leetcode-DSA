class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int idx, int val) {
        int n = nums.size();

        for(int i = 0;i<n;i++){
            for(int j = i;j<n;j++){
                if(abs(nums[i] - nums[j]) >= val  && abs(i - j) >= idx ){
                    return {i , j};
                }
            }
        }
        return {-1 , -1};
    }
};