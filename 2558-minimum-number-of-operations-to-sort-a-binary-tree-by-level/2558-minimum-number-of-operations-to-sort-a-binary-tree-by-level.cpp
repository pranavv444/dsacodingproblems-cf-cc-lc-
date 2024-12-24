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
    int minimumswaps(vector<int>&arr){
        int n=arr.size(),cnt=0;
        vector<pair<int,int>>vt;
        for(int i=0;i<n;i++){
            vt.push_back({arr[i],i});
        }
        sort(vt.begin(),vt.end());
        for(int i=0;i<n;i++){
            if(vt[i].first!=arr[i]){
                swap(vt[vt[i].second],vt[i]);
                i--;
                cnt++;
            }
        }
        return cnt;
    }
    int minimumOperations(TreeNode* root) {
        queue<TreeNode*>tq;
        tq.push(root);
        int res=0;
        while(!tq.empty()){
            int n=tq.size();
            vector<int>vt;
            for(int i=0;i<n;i++){
                TreeNode* curr=tq.front();
                tq.pop();
                vt.push_back(curr->val);
                if(curr->left) tq.push(curr->left);
                if(curr->right) tq.push(curr->right);
            }
            res+=minimumswaps(vt);
        }
        return res;
    }
};