class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int mn = INT_MAX;

        for(int i = 0;i< n;i++){
            for(int j = i + 1;j<n;j++){
                for(int k = j + 1;k<n;k++){
                    if(nums[i] < nums[j] && nums[j] > nums[k]){
                    sum = nums[i] + nums[j] + nums[k];
                    mn = min(mn , sum);}
                }
            }
        }
        if(mn == INT_MAX) return -1;
        return mn;
    }
};