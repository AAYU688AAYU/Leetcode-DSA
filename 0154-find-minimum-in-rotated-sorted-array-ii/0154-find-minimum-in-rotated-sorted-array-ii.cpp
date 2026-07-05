class Solution {
public:
    int findMin(vector<int>& nums){
        int n = nums.size();
        int mn = INT_MAX ;
        for(int i = 0;i<n;i++){
            mn = min(mn , nums[i]);
        }
        return mn;
    }
};