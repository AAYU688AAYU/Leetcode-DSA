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
    void  solve(TreeNode* root){
        if(root == NULL) return;

        solve(root->left);
        mp[root->val]++;
        solve(root->right);
    }
    vector<int> findMode(TreeNode* root) {

        solve(root);
        int mx = INT_MIN;
        vector<int> ans;
        for(auto x: mp){
            if(x.second > mx) mx = x.second;
        }
        for(auto x : mp){
            if(x.second == mx) ans.push_back(x.first);
        }
        return ans;
    }
};