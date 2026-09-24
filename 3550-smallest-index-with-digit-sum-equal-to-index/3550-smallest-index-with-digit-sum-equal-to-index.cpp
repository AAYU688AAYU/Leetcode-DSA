class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int m = nums[i];
            int ans = 0;

            while(m > 0){
                int res = m % 10;
                m /= 10;
                ans += res;
            }
            if(ans == i) return i;
        }
        return -1;
    }
};