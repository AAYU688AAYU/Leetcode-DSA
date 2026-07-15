class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size() ;
        int cnt = 0;
        long long   sum = 0;

        vector<long long> prefix(n);

        prefix[0] = nums[0];

        for(int i = 1;i<n;i++){
            prefix[i] = prefix[i -1] + nums[i];

        }
        long long  tot = prefix[n-1];
        for(int i = 0;i<n - 1;i++){
            sum += nums[i];

            if(sum >= tot - sum){
                cnt+= 1;
            }

        }
        return cnt;

    }
};