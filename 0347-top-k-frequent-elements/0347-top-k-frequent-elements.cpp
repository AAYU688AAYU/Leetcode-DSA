class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int , int> freq;

        for(int x : nums){
            freq[x]++;
        }
        while(k--){
            int maxx = 0;
            int element = 0;

            for(auto it : freq){
                if(it.second > maxx){
                    maxx = it.second;
                    element = it.first;

                }
            }
            ans.push_back(element);
            freq.erase(element);
        }
        return ans;
    }
};