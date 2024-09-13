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
    TreeNode* balanceBST(TreeNode* root) {
        vector<TreeNode*>tree;
        inOrder(root,tree);
        return maketree(tree,0,tree.size()-1);
    }
    private:
    void inOrder(TreeNode* root,vector<TreeNode*>&tree){
        if(root){
            inOrder(root->left,tree);
            tree.push_back(root);
            inOrder(root->right,tree);
        }
    }
    TreeNode* maketree(vector<TreeNode*>&tree,int l,int r){
        if(l<=r){
            int m=(l+r)/2;
            tree[m]->left=maketree(tree,l,m-1);
            tree[m]->right=maketree(tree,m+1,r);
            return tree[m];
        }
        return nullptr;
    }
};