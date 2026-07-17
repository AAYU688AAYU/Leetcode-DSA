class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int r = n -1;
        while(l < r){
            int m =( l + r)/ 2;
            if(nums[m] > nums[r]){
                l = m + 1;
            }else {
                r = m;
            }
        }
        int pivot = l;
        int result = binary(nums , target , 0 , pivot - 1);
        if(result != -1){
            return result;
        }
        return binary(nums , target , pivot , nums.size() - 1);



  
    }
    int binary(vector<int>& nums , int target , int start , int end){
        while(start <= end){
            int mid = (start + end) / 2;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] > target){
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }
        return -1;
    }
};