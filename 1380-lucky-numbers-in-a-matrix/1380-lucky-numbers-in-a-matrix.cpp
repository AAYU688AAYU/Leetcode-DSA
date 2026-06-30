class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();
        vector<int> ans;
        vector<int> mn(n , INT_MAX);
        vector<int> mx(m , 1);

        for(int i = 0 ;i<n;i++){
            for(int j = 0;j<m;j++){
                mn[i] = min(mn[i] , nums[i][j]);
                mx[j] = max(mx[j] , nums[i][j]);
            }
        }
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(nums[i][j] == mn[i] && nums[i][j] == mx[j]){
                    ans.push_back(nums[i][j]);
                }
            }
        }
        return ans;


    }
};