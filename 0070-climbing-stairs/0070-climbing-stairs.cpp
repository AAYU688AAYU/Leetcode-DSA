class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1;
        if (n == 2) return 2;
        int prev_1 = 1;
        int prev_2 = 2;
        int i = 3;
        int res;
        while(i <= n){
            res = (prev_1 + prev_2) ;
            prev_1 = prev_2;
            prev_2 = res;
            i++;
            
        }
        return res;
        
    }
};