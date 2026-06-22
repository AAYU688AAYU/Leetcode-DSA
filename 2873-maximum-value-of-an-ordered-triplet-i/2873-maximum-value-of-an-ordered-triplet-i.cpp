class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n  = nums.size();

        long long mx = LLONG_MIN;
        for(int i = 0 ;i<n;i++){
            for(int j = i + 1;j<n;j++){
                for(int k = j + 1;k<n;k++){
                    mx = max( mx , 1ll * (nums[i] - nums[j]) * nums[k]);
                }
            }
        }
        if(mx < 1) return 0;
        return mx;
    }
};