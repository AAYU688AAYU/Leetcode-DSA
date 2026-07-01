class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0;i<n;i++){
            int cnt = 0;
            if(nums[i] % 2 != 0){
                for(int j = i + 1;j < n;j++){
                    if(nums[j] % 2 == 0){
                        cnt++;
                    }
                }

            }else{
                for(int j =i+1;j<n;j++){
                    if(nums[j] % 2 != 0){
                        cnt++;
                    }
                }

            }
            ans.push_back(cnt);
        }
        return ans;
        
    }
};