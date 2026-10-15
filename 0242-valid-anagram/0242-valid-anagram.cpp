class Solution {
public:
    bool isAnagram(string s, string t) {
        int a =s.length();
        int b =t.length();
        int arr[26]={};
    
        if(a!=b){
            return false;
            }
       for (int i = 0 ; i<a; i++){
            arr[s[i]-'a'] += 1;
            arr[t[i] - 'a'] -= 1;
        }

        for (int check : arr){
            if (check != 0) return false;
        }
        return true;

    }
};