class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int n = nums.size();

        deque<int > deq;
        vector<long long > sum(n , 0);
        int result = INT_MAX;
        int j = 0;
        while(j < n){
            if(j == 0){
                sum[j] = nums[j];

            }else{
                sum[j] = sum[j - 1] + nums[j];

            }
            if(sum[j] >= k){
                result = min(result , j + 1);

            }
            while(!deq.empty() && sum[j] - sum[deq.front()] >= k){
                result = min(result , j - deq.front());
                deq.pop_front();
            }
            while(!deq.empty() && sum[j] <= sum[deq.back()]){
                deq.pop_back();

            }
            deq.push_back(j);
            j++;
        }
        if(result == INT_MAX) return -1;

        return result;
    }
};