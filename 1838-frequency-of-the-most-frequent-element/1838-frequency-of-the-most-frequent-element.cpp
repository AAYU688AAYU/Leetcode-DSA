class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long n = nums.size();
        sort(nums.begin() ,nums.end());
        long left = 0;
        long right = 0;
        long total = 0 ;
        long res =0;
        while(right < n){
            total += nums[right];
            while(nums[right] * (right - left + 1) > total + k){
                 total -= nums[left];
                 left++;

            }
            res = max(res, right - left + 1);
            right++;
        }
        return res;
    }
};