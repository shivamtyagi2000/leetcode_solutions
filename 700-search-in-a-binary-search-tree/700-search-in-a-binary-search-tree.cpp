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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode *temp=NULL;
        if(root!=NULL){
            if(root->val==val)
                return root;
            temp=searchBST(root->left,val);
            if(temp!=NULL)
                return temp;
            temp=searchBST(root->right,val);
            if(temp!=NULL)
                return temp;
            
        }
        return NULL;
    }
};