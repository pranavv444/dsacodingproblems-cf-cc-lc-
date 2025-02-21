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
class FindElements {
private:
    unordered_set<int>restored;
    void func(TreeNode*node,int value){
        if(node==nullptr){
            return;
        }
        node->val=value;
        restored.insert(value);
        func(node->left,2*value+1);
        func(node->right,2*value+2);
    }
public:
    FindElements(TreeNode* root) {
        func(root,0);
        
    }
    
    bool find(int target) {
        return restored.find(target)!=restored.end();
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */