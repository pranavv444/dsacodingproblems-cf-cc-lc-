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
    vector<int> largestValues(TreeNode* root) {
        vector<int>res;
        if(!root){
            return res;
        }
        queue<TreeNode*>qu;
        qu.push(root);
        while(!qu.empty()){
            int low=qu.size();
            int maxi=INT_MIN;
            for(int i=0;i<low;i++){
                TreeNode* x=qu.front();
                qu.pop();
                maxi=max(maxi,x->val);
                if(x->left!=nullptr) qu.push(x->left);
                if(x->right!=nullptr) qu.push(x->right);
            }
            res.push_back(maxi);
        }
        return res;
    }
};