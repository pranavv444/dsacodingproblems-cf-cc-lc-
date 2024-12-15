#include <queue>
using namespace std;
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (!root) return 0;  

        queue<pair<TreeNode*, int>> q;  
        q.push({root, 1});  
        while (!q.empty()) {
            auto [node, depth] = q.front();  
            q.pop();
            
            if (!node->left && !node->right) {
                return depth;
            }
            
            if (node->left) {
                q.push({node->left, depth + 1});
            }
            
            if (node->right) {
                q.push({node->right, depth + 1});
            }
        }
        
        return 0;  
    }
};