class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int mn = INT_MAX;

        for(int k = l;k <= r;k++){
            int i = 0,j = 0;
            int sum = 0;
            while(j < n){
                sum += nums[j];
                if(j - i + 1 > k){
                    sum -= nums[i];
                    i++;
                }
             
                if(sum > 0 && j - i + 1 == k){
                    mn = min(mn , sum);
                }
                j++;
            }
        }
        if(mn == INT_MAX) return -1;
        return mn;
    }
};