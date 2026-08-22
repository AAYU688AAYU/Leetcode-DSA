class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        int cnt = 1;
        if(n == 0) return 0;
        int ans = 1;
        for(int i = 0;i < n - 1;i++){
            if(nums[i] == nums[i + 1]){
                continue;
            }
            if(nums[i] == nums[i + 1] - 1){
                cnt++;
            }else{
                cnt = 1;

            }
            ans = max(ans ,cnt);
        }
        return ans;
    }
};