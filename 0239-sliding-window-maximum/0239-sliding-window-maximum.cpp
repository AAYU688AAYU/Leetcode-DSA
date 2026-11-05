class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();

        multiset<int> left;
        vector<int> ans;

        int i = 0;
        int j = 0;

        while (j < n) {

            left.insert(nums[j]);

            if (j - i + 1 == k) {

                int maxx = *left.rbegin();
                ans.push_back(maxx);

                left.erase(left.find(nums[i]));
                i++;
            }

            j++;
        }

        return ans;
    }
};