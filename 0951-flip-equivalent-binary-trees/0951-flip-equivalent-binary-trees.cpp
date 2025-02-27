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
private:
    bool check(TreeNode* node1,TreeNode* node2){
        if(!node1 && !node2) return true;
        if(!node1 || !node2 || node1->val !=node2->val){
            return false;
        }
        return(check(node1->left,node2->left) || check(node1->left,node2->right)) && (check(node1->right, node2->right) || check(node1->right, node2->left));

    }
public:
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        return check(root1,root2);
    }
};