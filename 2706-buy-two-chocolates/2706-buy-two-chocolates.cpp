class Solution {
public:
    int buyChoco(vector<int>& nums, int money) {
        int n = nums.size();
        sort(nums.begin() ,nums.end());
        int amt = nums[0] + nums[1];

        if(amt <= money){
            return money - amt;
        }
        return money;
    }
};