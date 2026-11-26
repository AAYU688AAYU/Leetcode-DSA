class Solution {
public:
    bool canAliceWin(int n) {
        int i = 10;
        bool is_true = false;
        while(n >=i && i > 0){
            n = n - i;
            is_true = true;
            i = i - 1;
            if(n >= i){
                n -= i;
                is_true = false;
                i--;
            }else{
                break;
            }

        }
        return is_true;
    }
};