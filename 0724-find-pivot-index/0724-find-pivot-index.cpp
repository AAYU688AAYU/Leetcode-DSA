class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        int total = 0;
        for(int i = 0; i < nums.size(); i++) {
            total += nums[i];
        }

        int sum1 = 0; 

        for(int mid = 0; mid < nums.size(); mid++) {
            int sum = total - sum1 - nums[mid]; 

            if(sum == sum1) {
                return mid;
            }

            sum1 += nums[mid];
        }

        return -1;
    }
};