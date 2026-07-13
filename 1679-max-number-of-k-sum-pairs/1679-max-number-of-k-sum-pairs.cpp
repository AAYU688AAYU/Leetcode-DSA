class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;
        sort(nums.begin() , nums.end());

        int i = 0;
        int j = n - 1;
        while( i < j){
            int sum = nums[i] + nums[j];
            if(sum == k){
                cnt++;
                i++;
                j--;
            }else if(sum < k){
                i++;
            }else{
                j--;
            }
        }
        return cnt;
    }
};