class Solution {
public:
    bool validMountainArray(vector<int>& nums) {
        int n = nums.size();
        if(n < 3) return false;

        int start = 1;
        int end = n - 2;

        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) {
                
                for(int i = 0; i < mid; i++) {
                    if(nums[i] >= nums[i + 1]) return false;
                }

                for(int i = mid; i < n - 1; i++) {
                    if(nums[i] <= nums[i + 1]) return false;
                }

                return true;
            }
            else if(nums[mid] < nums[mid + 1]) {
                start = mid + 1; 
            }
            else {
                end = mid - 1;    
            }
        }

        return false;
    }
};