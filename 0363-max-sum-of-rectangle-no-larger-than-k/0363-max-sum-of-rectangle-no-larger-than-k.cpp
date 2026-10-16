class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& nums, int k) {
        int n = nums.size();
        int m = nums[0].size();
        int ans = INT_MIN;
        vector<vector<int>> prefix(n, vector<int>(m, 0));
        prefix[0][0] = nums[0][0]; ans= (prefix[0][0])<=k?prefix[0][0]:INT_MIN ;
        for (int j = 1; j < m; j++) {
            prefix[0][j] = prefix[0][j - 1] + nums[0][j];
            if(prefix[0][j]<=k) ans= max(ans, prefix[0][j]);
        }
        for (int i = 1; i < n; i++) {
            prefix[i][0] = prefix[i - 1][0] + nums[i][0];
            if(prefix[i][0]<=k) ans= max(ans, prefix[i][0]);

        }
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1]+nums[i][j];
                cout<<"i , j "<< i<< "  "<<j<<"sum is "<<prefix[i][j]<<endl;
            }
        }
        for (int x1 = 0; x1 < n; x1++) {// staring point at x1, y1, tother poibt will be{ x1, y2}, {x2, y1}
            for (int y1 = 0; y1 < m; y1++) {
                for (int x2 = x1; x2 < n; x2++) {// endint at x2, y2
                    for (int y2 = y1; y2 < m; y2++) {

                            int sum = prefix[x2][y2];

    if (x1 > 0)
        sum -= prefix[x1 - 1][y2];

    if (y1 > 0)
        sum -= prefix[x2][y1 - 1];

    if (x1 > 0 && y1 > 0)
        sum += prefix[x1 - 1][y1 - 1];
                             if (sum <= k) {
                                    ans = max(ans, sum);
                        }
                    }
                }
            }
        }
        return (ans==INT_MIN)?-1: ans;
    }
};