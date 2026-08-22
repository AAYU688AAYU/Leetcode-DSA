class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int m = 1;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            if (m == nums[i]) {
                m++;
            }
        }
        return m;
    }
};