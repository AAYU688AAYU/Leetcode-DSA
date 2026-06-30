class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if(n == 2){
            return  (nums[0] -1) * (nums[1] - 1);
        }
        int mx = INT_MIN;
        for(int i = 0;i< n;i++){
            for(int j = i+1; j < n;j++){
                mx =max((nums[i] - 1) * (nums[j] - 1) , mx);
            }
        }
        return mx;
    }
};