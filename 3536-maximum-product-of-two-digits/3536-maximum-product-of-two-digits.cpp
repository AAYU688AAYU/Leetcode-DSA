class Solution {
public:
    int maxProduct(int n) {
        int res ;
        vector<int> ans;

        while (n > 0) {
            res = (n % 10);
            n /= 10;
            ans.push_back(res);
        }
        sort(ans.begin() , ans.end());


        return ans[ans.size() - 2] * ans[ans.size() -1];
    }
};