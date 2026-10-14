
class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        const long long MOD = 1e9 + 7;
        vector<int> freq(32, 0);

        for(int x : nums){
            for(int i = 0; i < 32; i++){
                if((x >> i) & 1){
                    freq[i]++;
                }
            }
        }

        long long ans = 0;

        while(k--){
            long long mask=0;
            for(int i=31; i>=0;i--){
                if(freq[i]>0)
               { mask= mask|(1<<i);
               freq[i]--;}
            }
            mask= mask%MOD;
               ans+=  (long long)(mask*mask)%MOD;
        }

        return ans%(1000000007);
    }
};
