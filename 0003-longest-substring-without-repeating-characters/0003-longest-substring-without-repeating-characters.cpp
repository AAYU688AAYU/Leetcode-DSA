class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        int ans = 0;
        int l = 0;

        for (int i = 0; i < n; i++) {

            if (mp.find(s[i]) != mp.end()) {
                if (mp[s[i]] >= l) {
                    l = mp[s[i]] + 1;
                }
            }

            ans = max(ans, i - l + 1);
            mp[s[i]] = i;
        }

        return ans;
    }
};