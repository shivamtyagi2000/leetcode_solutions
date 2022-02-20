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
    vector<int> preorderTraversal(TreeNode* root) {
       vector<int> ans;
       return f(root,ans); 
    }
    vector<int> f(TreeNode *root,vector<int> ans)
    {
        if(root==NULL)
            return ans;
        else
           {ans.push_back(root->val);
           ans=f(root->left,ans);
           ans=f(root->right,ans);}
        return ans;
    }
};