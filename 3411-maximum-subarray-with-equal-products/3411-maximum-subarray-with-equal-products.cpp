class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            long long prod = 1;
            long long  g = 0 , l =1;
            for (int j = i ; j < n; j++) {
                g = gcd(g , nums[j]);
                l = lcm(l, nums[j]);
                prod *= nums[j];
                if(prod > 25000){
                    break;
                }
                if (prod == g * l) {
                    cnt = max(j - i + 1, cnt);
                }
            }
        }
            return cnt;
        }
    };