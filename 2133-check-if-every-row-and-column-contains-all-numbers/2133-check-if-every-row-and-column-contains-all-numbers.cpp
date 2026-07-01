class Solution {
public:
    bool checkValid(vector<vector<int>>& nums) {
        int n = nums.size();
        
        for(int i = 0;i<n ;i++){
            set<int> r , c;

            for(int j = 0;j<n;j++){
                r.insert(nums[i][j]);
                c.insert(nums[j][i]);

            }
            if(r.size() != n || c.size() != n){
                return false;
            }
        }
        return true;
    }
};