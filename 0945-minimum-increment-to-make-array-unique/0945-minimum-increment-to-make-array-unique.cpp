class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        sort(nums.begin() , nums.end());
        for(int i = 1;i<n;i++){
            if(nums[i] <= nums[i - 1]){
                int val = nums[i - 1]+1;
                cnt += val - nums[i];
                nums[i] = val;
        
            }
        }
        return cnt;
    }
};