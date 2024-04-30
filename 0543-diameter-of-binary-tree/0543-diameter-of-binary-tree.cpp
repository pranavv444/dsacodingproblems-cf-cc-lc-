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
    int maxheight(TreeNode * node,int&maxi){
        if(node==nullptr){
            return 0;
        }
        int lh=maxheight(node->left,maxi);
        int rh=maxheight(node->right,maxi);
        maxi=max(lh+rh,maxi);
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        int answer=maxheight(root,maxi);
        return maxi;
    }
};