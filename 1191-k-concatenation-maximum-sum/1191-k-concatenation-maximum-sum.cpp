class Solution {
public:
    int kConcatenationMaxSum(vector<int>& nums, int k) {
        int n = nums.size();
        const long long MOD = 1e9 + 7;

        vector<long long > prefix(n);
        vector<long long > suffix(n);

        prefix[0] = nums[0];

        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }

        suffix[n - 1] = nums[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] + nums[i];
        }

        long long maxPrefix = *max_element(prefix.begin(), prefix.end());
        long long maxSuffix = *max_element(suffix.begin(), suffix.end());

        long long total = prefix[n - 1];

        // k = 1
        long long  currsum = nums[0];
        long long maxsum = nums[0];

        for (int i = 1; i < n; i++) {
            currsum = max((long long)nums[i], currsum + nums[i]);
            maxsum = max(maxsum, currsum);
        }

        if (k == 1)
              return (int)(maxsum < 0 ? 0 : maxsum % MOD);;

        // k >= 2
        long long res  =0;

        if (total > 0) {
            res =  max(maxsum, //k<2
                       maxSuffix + maxPrefix + (k - 2) * total);
        }else{
            res = max(maxsum , maxSuffix + maxPrefix);
        }
        cout<<res<<endl;
        if((int)res <= 0) return 0;

        return (int)(res % MOD);
    }
};