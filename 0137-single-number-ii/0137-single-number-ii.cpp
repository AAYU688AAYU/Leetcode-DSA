class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int ans;

        unordered_map<int ,int> mp;

        for(int x : nums){
            mp[x]++;

        }
        for(int it : nums){
            if(mp[it] == 1){
                ans = it;
            }
        }
        return ans;

    }
};