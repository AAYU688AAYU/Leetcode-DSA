class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1,
                               int k2) {
        int n = nums1.size();
        long long sum = 0;
        int mx = 0;
        long long k = (long long)k1 + k2;
        vector<int> diff(n);
        for(int i = 0;i < n ;i++){
            diff[i] = abs(nums1[i] - nums2[i]);
            mx = max(mx , diff[i]);
            sum += 1LL * diff[i] * diff[i];

        }
        vector<long long> freq(mx + 1 , 0);
        for(int i = 0;i < n;i++){
            freq[diff[i]]++;

        }
        for(int i = mx ; k > 0 && i > 0 ;i--){
            if(k >= freq[i]){
                k -= freq[i];
                freq[i - 1] += freq[i];
                freq[i] = 0;
            }else{
                freq[i] -= k;
                freq[i - 1] += k;
                k = 0;
            }
        }
        long long ans = 0;
        for(int i = 1 ; i <= mx ;i++){
            ans += freq[i] * i * i;
        }
        return ans ;
    }
};