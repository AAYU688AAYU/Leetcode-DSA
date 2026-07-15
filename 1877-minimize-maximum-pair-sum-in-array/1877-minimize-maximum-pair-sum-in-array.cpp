class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();

        int mx =INT_MIN;

        sort(nums.begin() , nums.end());
        int i = 0;
        int j = n -1;
        while(i <= j){
            int sum = nums[i] + nums[j];
            mx = max(mx , sum);
            i++;
            j--;
        }
        return mx;
    }
};