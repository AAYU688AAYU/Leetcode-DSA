class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum = 0;
        
        for(int i = 0; i < k;i++){
            sum += nums[i];

        }
        double ans = sum / k;
        int i = 0;
        int j = k;
        while(j < n){
            sum += nums[j];
            sum -= nums[i];

            ans = max(ans , sum / k);
            j++;
            i++;

        }
        return ans;
    }
};