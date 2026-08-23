class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size(); // 4
        vector<int> ans;
        set<int > s(nums.begin() , nums.end()); 
        for(auto it : s){
            ans.push_back(it);
        }       
        sort(ans.begin() , ans.end());
        n = ans.size();
    
        if (n < 3)
            return ans[n - 1];

        return ans[n - 3];
    }
};