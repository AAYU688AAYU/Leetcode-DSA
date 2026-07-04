class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int ,int> mp;
        int n = nums.size();
        vector<int> ans;

        for(int x:nums){
            mp[x]++;

        }
        for(int it : nums){
            if(mp[it] == 1){
                ans.push_back(it);
            }
        }
        return ans;
    }
    
};