class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int> mp;

        int i = 0;
        int j = 0;
        int minn = INT_MAX ;
        int  sum = 0;
        while(j < n){

            sum += nums[j];
            while(sum >= target){
                int len = j - i + 1;
                minn = min(minn , len);
                sum -= nums[i];
                i++;
                
            }
            j++;

        }
        if(minn == INT_MAX) return 0;
        return minn ;
    }
};