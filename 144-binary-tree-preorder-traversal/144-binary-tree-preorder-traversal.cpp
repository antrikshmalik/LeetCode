class Solution {
public:
    void recursive(TreeNode* root, vector<int> &vec) {
        if(root){
            vec.push_back(root->val);
            recursive(root->left, vec);
            recursive(root->right, vec);
        }
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> vec;
        recursive(root, vec);
        return vec;
    }
};