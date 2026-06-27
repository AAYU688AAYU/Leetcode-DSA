class Solution {
public:
    long long sumAndMultiply(int n) {
       long long num = 0;
       long long sum = 0;
       while(n != 0){
            int rem = n % 10;
            if(rem != 0){
                sum += rem;
                num = num * 10 + rem;
            }
            n /= 10;
       }
       long long num2 = 0;
       while(num != 0){
        int rem = num % 10;
        if(rem != 0){
            num2 = num2 * 10 + rem ;
        }
        num /= 10;
       }
       num2 *= sum;

       return num2;
          
       
    }
};