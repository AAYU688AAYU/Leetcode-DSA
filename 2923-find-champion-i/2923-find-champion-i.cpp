class Solution {
public:
    int findChampion(vector<vector<int>>& nums) {
        int n = nums.size();
        int cham ;
        int maxx = 0;
        for(int i = 0;i<n;i++){
            int cnt = 0;
            for(int j = 0;j<n;j++){
                if(nums[i][j] == 1){
                    cnt++;
                }
                if(maxx < cnt){
                    cham = i;
                    maxx = cnt;
                }
            }
        }
        return cham;


    }
};