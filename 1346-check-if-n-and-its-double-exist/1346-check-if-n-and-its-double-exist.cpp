class Solution {
public:
    bool checkIfExist(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int> mp;
        
        for(int i = 0;i<n;i++){
            int var = 2 * nums[i];
            if(mp.count(var)) return true;
            if(nums[i] % 2 == 0 && mp.count(nums[i]/2)) return true;
            
            mp[nums[i]]++;
        }
        return false;
    }
};