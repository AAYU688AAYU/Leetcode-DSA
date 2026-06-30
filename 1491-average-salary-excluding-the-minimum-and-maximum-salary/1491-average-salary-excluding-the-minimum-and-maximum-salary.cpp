class Solution {
public:
    double average(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        double sum = 0 ,cnt = 0;
        for(int i = 1;i< n -1;i++){
            sum += nums[i];
            cnt++;
        }
        double res = sum / cnt;
        return res;
    }
};