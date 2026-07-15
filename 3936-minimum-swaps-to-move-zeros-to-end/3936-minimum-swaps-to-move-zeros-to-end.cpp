class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = n - 1;
        int cnt = 0;
        int diff = 0;

        for(int i = 0;i<n;i++){
            if(nums[i] == 0){
                cnt += 1;

            }
        }
        for(int i = n - 1;i >= n - cnt;i--){
            if(nums[i] == 0){
                diff++;
            }
        }

        return cnt-diff;
    }
};