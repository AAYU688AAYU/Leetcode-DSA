class Solution {
public:
    vector<int> sortByBits(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int , int>> v;

        for(int x : nums){
            v.push_back({__builtin_popcount(x) , x});

        }
        sort(v.begin() ,v.end());
        for(int i = 0;i<n ;i++){
            nums[i] = v[i].second;
        }


        return nums;
    }
};