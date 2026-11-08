class Solution {
public:
    int countServers(vector<vector<int>>& nums) {
        const int m = nums.size() , n = nums[0].size();
        vector<int> rows(m) , cols(n);
        for(int i = 0; i <m;i++){
            for(int j = 0; j< n;j++){
                rows[i] += nums[i][j];
                cols[j] += nums[i][j];

            }
        }
        int ans = 0;
        for(int i = 0; i< m ;i++){
            for(int j = 0; j <n;j++){
                if(nums[i][j] && rows[i] + cols[j] > 2){ 
                         ++ans;
}
            }

        }
        return ans;
    }
};