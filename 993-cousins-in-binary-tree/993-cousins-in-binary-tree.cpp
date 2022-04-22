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
    bool isCousins(TreeNode* root, int x, int y) {
        if(root->val==x || root->val==y) return false;
        queue<pair<TreeNode*, int>> q;
        q.push({root, NULL});
        vector<vector<int>> result;
        vector<int> res;
        while(!q.empty()) {
            int level = q.size();
            int parentX=0, parentY=0;
            while(level) {
                auto nodePair = q.front(); q.pop();
                if(nodePair.first->val == x){
                    // cout<<nodePair.first->val;
                    parentX = nodePair.second;
                }
                if(nodePair.first->val == y){
                    // cout<<nodePair.first->val<<" ";
                    parentY = nodePair.second;
                }
                if(nodePair.first->left) 
                    q.push({nodePair.first->left, nodePair.first->val});
                if(nodePair.first->right) 
                    q.push({nodePair.first->right, nodePair.first->val});
                if(parentX and parentY) {
                    if(parentX != parentY)
                        return true;
                }
                level--;
            }
        }
        return false;
    }
};