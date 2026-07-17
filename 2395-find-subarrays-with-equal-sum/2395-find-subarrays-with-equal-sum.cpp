class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int n = nums.size();
        int sum1;

        unordered_map<int , int> mp;

        for(int i = 0;i<n - 1;i++){
            sum1 = nums[i] + nums[i+1];
            if(mp.count(sum1)){
                return true;
            }
            mp[sum1]++;
        }
        return false;


        
    }
};