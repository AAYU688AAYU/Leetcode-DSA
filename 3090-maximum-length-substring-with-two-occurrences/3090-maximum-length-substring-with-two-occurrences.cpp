class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        unordered_map<char ,int> mp;
        int k = 2;
        int i = 0;
        int j = 0;
        int cnt = 0;
        int ans = 0;

        while(j < n){
            if(mp[s[j]] < k ){
                mp[s[j]]++;
                cnt++;
                j++;
                ans = max(ans , cnt);
            }else{
                mp[s[i]]--;
                i++;
               
                cnt--;

            }


        }
        return ans;
    }
};