class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
       
        multiset<int> left ,right;
        long long leftsum = 0, rightsum = 0;  
        int j = 0;
        while(j < n){
            if(left.size() <= right.size()){
                left.insert(nums[j]);
                leftsum += nums[j];

            }else{
                right.insert(nums[j]);
                rightsum += nums[j];

            }

            if(!left.empty() && !right.empty()){
                int maxleft = *left.rbegin();
                int minright = *right.begin();

                if(maxleft > minright){
                    left.erase(left.find(maxleft));
                    left.insert(minright);
                    right.erase(right.find(minright));
                    right.insert(maxleft);

                    leftsum += (minright - maxleft);
                    rightsum += maxleft - minright;
                }
                
            }
            
            j++;
        }

        long long median = *left.rbegin();     
        long long left_size = left.size();     
        long long right_size = right.size();  
        return (int)((left_size * median - leftsum) +
                     (rightsum - right_size * median));
    }
};