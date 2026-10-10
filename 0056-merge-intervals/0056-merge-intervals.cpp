class Solution {
public:
    static bool cmp(vector<int>& a , vector<int>& b){
        return a[0] < b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        int n = nums.size();
        
        sort(nums.begin() , nums.end() , cmp);
        vector<vector<int>> ans;
        int a = nums[0][0];
        int b = nums[0][1];

        for(int i = 0;i < n ;i++){
            if(nums[i][0] <= b){
                b = max(nums[i][1] , b);
            }
            else{
                ans.push_back({a,b});
                a = nums[i][0];
                b = nums[i][1];
            }
        }
        ans.push_back({a, b});

        return ans;
       

    }
};