class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        vector<int > mx;
        int mxx = INT_MIN;
        long long  sum = 0;

        for(int i = 0;i< n;i++){
          mxx = max(mxx , nums[i]);
            mx.push_back(mxx);

        }
        for(int i = 0;i<n;i++){
            prefix[i] = gcd(nums[i] , mx[i]);

        }
        sort(prefix.begin() , prefix.end());
        int i = 0;
        int j = n -1;
        while(i < j){
            sum += gcd(prefix[i] , prefix[j]);
            i++;
            j--;
        }
        return sum;

    }
};