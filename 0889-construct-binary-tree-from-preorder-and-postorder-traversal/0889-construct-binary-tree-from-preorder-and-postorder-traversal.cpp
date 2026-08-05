/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    unordered_map<int , int> mp;
    int idx = 0;
    TreeNode* solver(vector<int>& preorder,vector<int>& postorder, int left, int right){
           if(left > right) return NULL; 

        
        TreeNode* root = new TreeNode(preorder[idx++]);
        
        if(left == right){
            return root;
        }
        int mid = mp[preorder[idx]];

        root->left = solver(preorder, postorder ,left , mid  );
        root->right = solver(preorder , postorder , mid + 1 , right - 1);

        return root;
           
    }
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        int n = postorder.size();
        int m = preorder.size();

        for(int i = 0;i<n;i++){
            mp[postorder[i]] = i;

        }
        return solver(preorder , postorder , 0 , n - 1);
        
    }
};