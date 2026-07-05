class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;

        int n = nums.size();
        sort(nums.begin() , nums.end());
        int st = nums[0];
        int i = 0;
        while( i < n){
            int exp = st + i;
            if(nums[i] == exp ){
                i++;
            }else{
                st++;
                ans.push_back(exp);
            }
        }
        return ans;
        
    }
};