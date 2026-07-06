class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int> mp;
        vector<int> ans;
        set<int> s;

        for(int x : nums){
            mp[x]++;

        }
        for(int it: nums){
            if(mp[it] == 2){
                s.insert(it);
            }
        }
        ans.insert(ans.end() ,s.begin() , s.end());
        return ans ;

    }
};