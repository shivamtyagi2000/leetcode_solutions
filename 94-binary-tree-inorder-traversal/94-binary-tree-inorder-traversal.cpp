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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        ans=f(ans,root);
        return ans;
    }
    vector<int> f(vector<int> ans,TreeNode *root)
    {
        if(root!=NULL)
       { ans=(f(ans,root->left));
        ans.push_back(root->val);
        ans=(f(ans,root->right));
        }
        return ans;
    }
};