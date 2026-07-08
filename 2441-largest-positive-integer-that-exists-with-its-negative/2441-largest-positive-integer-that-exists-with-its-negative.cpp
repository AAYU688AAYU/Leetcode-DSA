class Solution {
public:
    int findMaxK(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin() ,  nums.end());
        set<int> s(nums.begin() , nums.end());
        for(int x: s){
            ans.push_back(x);
        }
        int n = ans.size();
        for(int i = 0;i<n ;i++){
            for(int j = n -1;j > i ;j--){
                if(ans[i] == -ans[j]){
                    return ans[j];
                }
            }
        }
        return -1;

    }
};