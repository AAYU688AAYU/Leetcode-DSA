
class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.size();

        unordered_map<char, int> mp;
        int cnt = 0;
        int k = 3;

        int i = 0;
        int j = 0;

        while (j < n) {
            mp[s[j]]++;

            if (j - i + 1 == k) {
                if (mp.size() == k) {
                    cnt++;
                }
                mp[s[i]]--;
                if (mp[s[i]] == 0) {
                    mp.erase(s[i]);
                }
            i++;
            }
            j++;
        }

        return cnt;
    }
};
