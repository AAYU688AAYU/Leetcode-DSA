class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();

        int sum = nums[0];
        for(int i = 0;i < n ;i++){
            int pro = 1;
            for(int j = i; j< n;j++){
                pro *= nums[j];
                sum = max(sum , pro);

            }
        }
        return sum;
    }
};