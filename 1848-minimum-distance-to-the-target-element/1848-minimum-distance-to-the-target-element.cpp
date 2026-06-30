class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n = nums.size();
        int cnt = 0;
        int idx , mn = INT_MAX;

        for(int i = 0 ;i<n;i++){
            if(nums[i] == target){
                idx = i;
                mn = min(mn , abs(idx - start));
            }
        }

        return mn;
    }
};