class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int n = nums.size();
        int minn = INT_MAX;
        for(int x : nums){
            if(x % 2 != 0){
                minn = min(minn , x);
            }
        }
        if(minn == INT_MAX) return true;
        for(int it : nums){
            if(it % 2 == 0  && it < minn){
                return false;
            }
        }
        return true;
    }
};