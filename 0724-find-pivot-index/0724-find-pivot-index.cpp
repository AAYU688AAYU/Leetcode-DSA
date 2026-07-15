class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        vector<int> surfix(n);

        prefix[0] = nums[0];
        for(int i = 1;i<n;i++){
            prefix[i] = prefix[i - 1] + nums[i];

        }
        surfix[n -1] = nums[n -1];
        for(int i = n - 2;i>= 0;i--){
            surfix[i] = surfix[i + 1] + nums[i];
        }
        for(int i = 0 ;i<n;i++){
            if(prefix[i] == surfix[i]){
                return i;
            }
        }
        return -1;
    }
};