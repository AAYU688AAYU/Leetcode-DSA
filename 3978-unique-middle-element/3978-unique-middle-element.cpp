class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int , int> mp;
        for(int x : nums){
            mp[x]++;
        }
        if( mp[nums[n/2]] == 1 ) return true;
        return false;
    }
};