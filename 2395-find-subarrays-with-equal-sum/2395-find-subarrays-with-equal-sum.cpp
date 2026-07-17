class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int n = nums.size();
        int sum1 ,sum2;

        for(int i = 0;i<n - 1;i++){
             sum1 = nums[i] + nums[i + 1];
            for(int j = i + 1 ;j< n -1;j++){
                sum2 = nums[j] + nums[j +1];
                if(sum1 == sum2) return true;
            }
            
        }
        return false;


        
    }
};