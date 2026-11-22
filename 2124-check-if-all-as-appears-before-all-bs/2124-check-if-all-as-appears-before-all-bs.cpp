class Solution {
public:
    bool checkString(string s) {
        int n = s.size();
        unordered_map<int, int> mp;
        for(int i = 0; i < n;i++){
            if(s[i] == 'a'){
                mp[s[i]]++;
            }
        }
        for(int i = 0; i < n;i++){

            if(s[i] == 'a' ){
                mp[s[i]]--;
            }
            if(s[i] == 'b' && mp['a'] > 0) return false;

        }
        return true;
    }
};