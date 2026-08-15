class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n = nums.size();
        int maxWater = 0;
        int i = 0;
        int j = n -1;
        while(i < j){
            int w = j - i;
            int h = min(nums[i] , nums[j]);
            int area = w * h;
            maxWater = max(maxWater ,area);
            
            nums[i] < nums[j] ? i++ : j--;
        }
        return maxWater;
    }
};