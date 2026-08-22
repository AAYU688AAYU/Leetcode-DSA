class Solution {
public:
    bool checkDivisibility(int n) {
        int ans = n;
        int sum = 0;
        int prod = 1;

        while(n > 0){
            sum += n % 10;
            prod *= n % 10;
            n /= 10;
        }

        return ans % (prod + sum) == 0;
    }
};