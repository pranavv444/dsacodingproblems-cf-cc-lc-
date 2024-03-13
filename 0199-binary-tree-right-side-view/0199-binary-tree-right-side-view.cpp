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
    vector<int> rightSideView(TreeNode* root) {
        int level=0;
        vector<int>ans;
        if(root==nullptr){
            return ans;

        }
        rightside(root,ans,0);
        return ans;


    }

private:
    void rightside(TreeNode* root,vector<int>&ans,int level){
        if(root==nullptr){
            return;
        }
        if(ans.size()==level){
            ans.push_back(root->val);
        }
        rightside(root->right,ans,level+1);
        rightside(root->left,ans,level+1);
    }
};