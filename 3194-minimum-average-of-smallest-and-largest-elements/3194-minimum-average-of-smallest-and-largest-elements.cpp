class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n = nums.size();
        double mn = 1e18;

        sort(nums.begin() , nums.end());
        int i = 0;
        int j = n -1;
        while(i < j){
            double avg = (nums[j] + nums[i] ) / 2.0;
            mn = min(mn , avg);
            i++;
            j--;

        }
        return mn;
    }
};