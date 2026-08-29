class Solution {
public:
    bool isPossible(vector<int>& nums, int mid , int k){
        int n = nums.size();
        int paint = 1 , time = 0;
        for(int i = 0;i < n ;i++){
            if(time + nums[i] <= mid){
                time += nums[i];
            }else{
                paint++ ;
                time = nums[i];
            }
        }
        return paint <= k;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        int st = *max_element(nums.begin() , nums.end());
        for(int i = 0;i < n;i++){
            sum += nums[i];
        }
        int end = sum;
        int mid , ans = -1;
        while(st <= end){
            mid = st +(end - st)/ 2;

            if(isPossible(nums , mid , k)){
                ans = mid;
                end = mid - 1;
            }else{
                st = mid + 1;
            }
        }
        return ans ;
    }
};