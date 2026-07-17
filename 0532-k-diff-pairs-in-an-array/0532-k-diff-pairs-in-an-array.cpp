class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;
        set<pair<int , int>> s;
        

        for(int i = 0;i<n;i++){
            for(int j = i +1;j<n;j++){
               int diff = abs(nums[i] - nums[j]);
               if(diff == k ){
                s.insert({max(nums[i] , nums[j]) , min(nums[i] , nums[j])});
               }
            }
        }
        return s.size();
    }
};