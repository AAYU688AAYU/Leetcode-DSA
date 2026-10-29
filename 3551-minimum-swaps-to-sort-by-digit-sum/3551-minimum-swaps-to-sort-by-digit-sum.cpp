class Solution {
public:
    int digit_sum(int m) {
        int ans = 0;
        while (m > 0) {
            ans += m % 10;
            m /= 10;
        }
        return ans;
    }

    static bool cmp(pair<int, int>& a, pair<int, int>& b) {
        if (a.second != b.second)
            return a.second < b.second;
        return a.first < b.first;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;

        vector<pair<int, int>> actual;

        for (int i = 0; i < n; i++) {
            actual.push_back({nums[i], digit_sum(nums[i])});
        }

        sort(actual.begin(), actual.end(), cmp);

        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            mp[nums[i]] = i;
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] == actual[i].first)
                continue;

            cnt++;

            int idx = mp[actual[i].first];

            mp[nums[i]] = idx;
            mp[actual[i].first] = i;

            swap(nums[i], nums[idx]);
        }

        return cnt;
    }
};
