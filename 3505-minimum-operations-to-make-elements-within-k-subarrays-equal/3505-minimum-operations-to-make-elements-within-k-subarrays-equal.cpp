class Solution {
public: 
    int n, x ,k;
    vector<long long> minop;               // CHANGED
    vector<vector<long long>> memo;        // CHANGED
    long long  solve(int count , int i){
         if(count == k){
            return 0;
             
         }
         int sub = k - count;
         int ele_need = sub * x;
         int last_index = i + ele_need - 1;

         if(last_index >= n){
            return 1e16;
         } 
         if(memo[count][i] != -1){
            return memo[count][i];
         }
         long long result = minop[i] + solve(count + 1 , i + x);
         result = min(result , solve(count  , i+1));

         return memo[count][i] = result;
    }
    long long minOperations(vector<int>& nums, int x, int k) {
        this->x = x;
        this->n = nums.size();
        this->k = k;
        minop.assign(n + 1, 0);                          // CHANGED
        memo.assign(k + 1, vector<long long>(n + 1, -1)); // CHANGED (replaces memset)

        multiset<int > left ,right;
        long long leftsum = 0 , rightsum = 0;

        int i = 0;
        int j = 0;
        while(j < n){
             if(left.size() <= right.size()){
                left.insert(nums[j]);
                leftsum += nums[j];
             }else{
                 right.insert(nums[j]);
                rightsum  += nums[j];
             }

             if(!left.empty() && !right.empty()){
                int maxleft = *left.rbegin();
                int  minright = *right. begin();

                if(maxleft > minright){
                    left.erase(left.find(maxleft));
                    right.erase(right.find(minright));

                    left.insert(minright);
                    right.insert(maxleft);
                     
                    leftsum += minright - maxleft;
                    rightsum += maxleft - minright;

                }
                 
             }
             if(j - i + 1 == x){
                long long median = *left.rbegin(); 
                long long left_size = left.size();
                long long right_size = right.size();

                 minop[i] = ((left_size * median - leftsum ) + (rightsum - right_size * median));

                 if(left.find(nums[i]) != left.end()){
                    left.erase(left.find(nums[i]));
                    leftsum -= nums[i];
                 }else{
                    right.erase(right.find(nums[i]));
                    rightsum -= nums[i];
                     
                 }

                 while(left.size() > right.size() + 1){
                    int v = *left.rbegin();
                    left.erase(left.find(v));
                    leftsum -= v;
                    right.insert(v);
                    rightsum += v;
                 }
                 while(left.size() < right.size()){
                    int v = *right.begin();
                    right.erase(right.begin());
                    rightsum -= v;
                    left.insert(v);
                    leftsum += v;
                 }

                 i++;

             }
             j++;
        }
         

         return solve(0, 0);
    }
};