class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        unordered_map<int , int> mp;
        for(int x: nums){
            mp[x]++;
        }
        set<int> s;
        for(int it : nums){
            if(mp[it] > n/3){
                s.insert(it);
            }
        }
        for(int y:s){
            ans.push_back(y);
        }

        return ans;
    }
};