class Solution {
public:
     vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int s ,p = 0;
        int n = nums.size();
        s = n - 1;
        int s_sum = 0 , p_sum = 0;
        vector<int> res(n);
        for(int i = 0; i < n;i++){
            s_sum += nums[i];
        }
        for(int i = 0;i < n;i++){
             
             s_sum -= nums[i];
             res[i] = abs(s_sum -(s * nums[i])) + abs(p_sum -(p * nums[i]));
             s -= 1;
             p += 1;
             p_sum += nums[i];
        }
        return res;
    
    }
};