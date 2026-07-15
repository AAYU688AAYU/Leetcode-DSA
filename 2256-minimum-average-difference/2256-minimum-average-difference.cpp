class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        long long  res = 0;
        int mn = INT_MAX;
        vector<long long> prefix(n);
        prefix[0] = nums[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }
        int ans_ind = 0;
        long long  total = prefix[n - 1];
        for (int i = 0; i < n; i++) {
            int right_wali = 0;
            res += nums[i];
            int ans_1 = res / (i + 1);
            if (i != n - 1) {
                right_wali = abs(total - res) / (n - i - 1);
            }
            long long  ans = abs(ans_1 - right_wali);

            if (ans < mn) {
                mn = ans;
                ans_ind = i;
            }
        }
        return ans_ind;
    }
};