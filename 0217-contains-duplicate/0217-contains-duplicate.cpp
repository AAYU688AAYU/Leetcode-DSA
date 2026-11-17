class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int ,int> mp;
        for(int i : nums){
            mp[i]++;
        }
        for(int i = 0; i < n;i++){
            if(mp[nums[i]] >= 2){
                return true;
            }
        }
        return false;
    }
};