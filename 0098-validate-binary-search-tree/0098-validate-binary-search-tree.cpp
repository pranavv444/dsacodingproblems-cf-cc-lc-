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
    bool checkit(TreeNode *root,long long mini ,long long maxi){
        if(root==nullptr){
            return true;
        }
        if(root->val<mini || root->val>maxi){
            return false;
        }
        return checkit(root->left,mini,root->val-1ll) && checkit(root->right,root->val+1ll,maxi);


    }
    bool isValidBST(TreeNode* root) {
        long long mini=INT_MIN;
        long long maxi=INT_MAX;
        return checkit(root->left,mini,root->val-1ll) && checkit(root->right,root->val+1ll,maxi);
    }
};