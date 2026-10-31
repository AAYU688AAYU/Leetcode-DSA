class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int ,int>mp;

        int presum = 0;
        int cnt = 0;
        mp[0]=1;
        for(int i = 0; i < n;i++){
            presum += nums[i];
            int rem = presum% k;
            if(rem<0)
            rem+=k;
            if(mp.find(rem)!=mp.end())// present
        {    cnt += mp[rem]; mp[rem] += 1;}
else
           mp[rem]=1;
        }
        return cnt;
    }
};