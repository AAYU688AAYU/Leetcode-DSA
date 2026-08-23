/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    unordered_map<int, int> mp;
    int idx = 0;
    TreeNode* construct(vector<int>& inorder, int left, int right,
                        vector<int>& preorder) {
        if (left > right)
            return NULL;
        int val = preorder[idx++];

        TreeNode* root = new TreeNode(val);
        int mid = mp[val];

        root->left = construct(inorder, left, mid- 1, preorder);
        root->right = construct(inorder, mid + 1, right, preorder);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();

       
        for(int i = 0;i< n;i++){
            mp[inorder[i]] = i;
        }
        return construct(inorder , 0 , n - 1 , preorder);
    }
};