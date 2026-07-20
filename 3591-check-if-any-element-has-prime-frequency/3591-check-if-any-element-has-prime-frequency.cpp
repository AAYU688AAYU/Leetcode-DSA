class Solution {
public:
bool isPrime(int x) {
    if (x < 2) return false;

    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }

    return true;
}
    bool checkPrimeFrequency(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int> mp;

        for(int x : nums){
            mp[x]++;

        }
        for(int i = 0;i <n ;i++){
            if( isPrime(mp[nums[i]])){
                return true;
            }
        }
        return false;
    }
};