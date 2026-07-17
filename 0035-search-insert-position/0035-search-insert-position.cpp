class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();        

        int st = 0;
        int end = n -1;
        int res = nums.size();
        while(st <= end){
            int mid = (st + end) /2;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] > target){
                res = mid;
                end = mid - 1;
            }else {
                st = mid + 1;
            }
        }
        return res;
        
    } 
};