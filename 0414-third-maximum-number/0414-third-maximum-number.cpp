class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size(); // 3.  2 2 3 1
        vector<int> ans; // 2 3 1 

        set<int > s(nums.begin() , nums.end()); // 2 3 1
        for(auto it : s){
            ans.push_back(it); // 
        }       
        sort(ans.begin() , ans.end()); // 1(n - 3), 2(n - 2), 3(n -1)
        n = ans.size();
        
    
        if (n < 3) // 1 ,2(n -1) 
            return ans[n - 1];

        return ans[n - 3]; // 3 2 1;
    }
};