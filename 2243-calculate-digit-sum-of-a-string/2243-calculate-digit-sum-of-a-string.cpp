class Solution {
public:
   int digit_sum(string s) {
        int ans = 0;
        for(char ch : s) {
            ans += ch - '0';
        }
        return ans;
    }
    string digitSum(string s, int k) {
        
        while(s.size() > k){
        int n = s.size();
        string answer = "";
        for(int i = 0; i < n;i+= k){

             string result = "";
                int j = i;
                while(j < n && j < i+ k){
                   result += s[j];
                   j++;
                }
                answer += to_string(digit_sum(result));
            
        }
        s = answer;
        }
    return s;
    }
};