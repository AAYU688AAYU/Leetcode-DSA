class Solution {
public:
    int smallestNumber(int n, int t) {
        int num=n;
        while(num < INT_MAX){
            int x = num;
            int product = 1;
            while(x > 0){
                product = product*(x%10);
                x /= 10 ;
            }
            if(product % t  == 0)  return num;
            ++num;
        }
        return 0;
    }
};