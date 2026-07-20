class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2,-1);
        int mn = INT_MAX;
        unordered_map<int , int> mp;

        for(int i = 0;i<n;i++){
            mn = min(mn , nums[i]);
            mp[nums[i]]++;
            
        }
        sort(nums.begin() , nums.end());

        // ans.push_back(mn);
        for(int i = 0;i<n;i++){
            if(mp[nums[i]] != mp[mn]){
                 ans[0] = mn;
                ans[1] = nums[i];
                break;
            }
        }
        
        
        return ans;

    }
};