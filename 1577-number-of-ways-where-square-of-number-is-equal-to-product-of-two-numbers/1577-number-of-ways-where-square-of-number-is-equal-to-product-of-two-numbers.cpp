class Solution {
public:
    int count(vector<int>& nums, vector<int>& ans) {
        int n = nums.size();
        int m = ans.size();
        int cnt = 0;

        sort(ans.begin(), ans.end());

        for(int i = 0; i < n; i++) {
            int j = 0;
            int k = m - 1;

            long long tar = 1LL * nums[i] * nums[i];

            while(j < k) {
                long long pro = 1LL * ans[j] * ans[k];

                if(tar == pro) {
                    if(ans[j] == ans[k]) {
                        int len = k - j + 1;
                        cnt += len * (len - 1) / 2;
                        break;
                    }

                    int left = 1, right = 1;

                    while(j + 1 < k && ans[j] == ans[j + 1]) {
                        left++;
                        j++;
                    }

                    while(k - 1 > j && ans[k] == ans[k - 1]) {
                        right++;
                        k--;
                    }

                    cnt += left * right;
                    j++;
                    k--;
                }
                else if(tar < pro) {
                    k--;
                }
                else {
                    j++;
                }
            }
        }

        return cnt;
    }

    int numTriplets(vector<int>& nums, vector<int>& ans) {
        return count(nums, ans) + count(ans, nums);
    }
};