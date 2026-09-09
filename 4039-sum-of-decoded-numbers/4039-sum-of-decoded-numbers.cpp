class Solution {
public:
    long long power(long long x , long long y , long long mod){
        long long res = 1;
        while(y > 0){
            if(y & 1) res = (res* x)% mod;

            x = ( x * x) % mod;
            y >>= 1;
        }
        return res;
    }
    int sumDecoded(vector<long long>& nums) {
        const long long MOD = 1000000007;
        long long ans = 0;
        for(long long num: nums){
            int width = num % 10;
            long long d = num / 10;

            string s = to_string(d);
            long long x = stoll(s.substr(0 , width));
            long long y = stoll(s.substr(width));
            long long p = 1;
            for(int i = width;i < s.size() ;i++){
                p = (p * 10 ) % MOD;
            }
                long long decorded = power(x , y , MOD);
                ans = (ans + decorded) % MOD;
            
        }
        return ans;
    }
};