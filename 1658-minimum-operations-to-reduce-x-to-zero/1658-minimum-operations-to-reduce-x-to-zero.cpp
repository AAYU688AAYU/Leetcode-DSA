class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();

        vector<int> prefix(n);
        vector<int> suffix(n);
unordered_map<int, int>mp;
        int sum=0;  mp[0]=-1;
        for(int i = 0;i < n;i++){
            sum+= nums[i];
mp[sum]=i;
        }
        int ans=INT_MAX; sum=0; 
        if(mp.find( x)!= mp.end())
        ans= mp[x]+1;

        for( int i= n-1; i>=0;i--)
        {
                sum+= nums[i];
                int diff=  x-sum;
                if( mp.find( diff)!= mp.end())// presnwet
                {
                    int idx1= mp[diff];
                    if( idx1< i)
                    {
                         int len1= mp[diff]+1, len2=  nums.size()- i;
                          ans= min( ans, len1+ len2);
                    }
                }
        }
        return (ans==INT_MAX)?-1:ans;
    }
};