
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        unordered_map<int, int> mp;
        int i = 0;
        int j = 0;
        int maxx = 0;

        while (j < n) {

            while (mp[nums[j]] > 0) {
                sum -= nums[i];
                mp[nums[i]]--;
                i++;
            }

            sum += nums[j];
            mp[nums[j]]++;

            maxx = max(maxx, sum);
            j++;
        }

        return maxx;
    }
};
