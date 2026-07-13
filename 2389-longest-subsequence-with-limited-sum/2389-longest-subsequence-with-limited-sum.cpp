class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& prev) {
        int n = nums.size();
        vector<int> ans;

        sort(nums.begin(), nums.end());
        vector<int> prefix(n);
        prefix[0] = nums[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }
        for (int q : prev) {
            int l = 0, r = n - 1;

            while (l <= r) {
                int mid = (l + r) / 2;

                if (prefix[mid] <= q)
                    l = mid + 1;
                else
                    r = mid - 1;
            }

            ans.push_back(l);
        }
        return ans;
    }
};