class Solution {
public:
     
    void inorder(TreeNode* root, vector<int>& arr) {
        if (root == NULL)
            return;

        inorder(root->left, arr);
        arr.push_back(root->val);
        inorder(root->right, arr);
    }

    int getMinimumDifference(TreeNode* root) {
        vector<int> arr;
        inorder(root, arr);

        int ans = INT_MAX;

        int i = 0;
        int j = 1;

        while (j < arr.size()) {
            ans = min(ans, abs(arr[j] - arr[i]));
            i++;
            j++;
        }

        return ans;
    }
};