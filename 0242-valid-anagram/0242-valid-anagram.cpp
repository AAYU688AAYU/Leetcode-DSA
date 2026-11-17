class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> count(26 , 0);

        for(char x : s){
            count[x - 'a']++;

        }
        for(char z : t){
            count[z - 'a']--;
        }
        for(int i = 0; i < count.size();i++){
            if(count[i] != 0) return false;
        }

        return true;
    }
};