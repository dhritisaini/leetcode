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
    void dfs(TreeNode* root, int lv,vector<int>& v)
    {
        if(!root)
            return;
        if(lv>=v.size())
            v.push_back(root->val);
        dfs(root->right,lv+1,v);
        dfs(root->left,lv+1,v);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
        dfs(root,0,v);
        return v;       
    }
};