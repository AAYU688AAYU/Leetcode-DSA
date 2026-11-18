class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> ans(m + n);

        int i = 0, j = 0, k = 0;
        while (i < n && j < m) {
            if (nums1[i] < nums2[j]) {
                ans[k++] = nums1[i++];
            } else {
                ans[k++] = nums2[j++];
            }
        }
        while (i < n) {
            ans[k++] = nums1[i];
            i++;
        }
        while(j < m){
            ans[k++] = nums2[j++];
        }
        int total = m + n;
        if(total % 2 == 1){
            return ans[total / 2];

        }else{
            return (ans[total / 2  - 1] + ans[total / 2] )/ 2.0;
        }
        return 0;
    }
};