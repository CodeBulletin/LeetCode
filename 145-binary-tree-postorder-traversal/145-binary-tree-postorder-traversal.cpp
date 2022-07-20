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
    void postorder(TreeNode* Tree, vector<int>& vec) {
        if(Tree->left != nullptr) {
            postorder(Tree->left, vec);
        }
        if(Tree->right != nullptr){
            postorder(Tree->right, vec);
        }
        vec.push_back(Tree->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> vec;
        if(root != nullptr) postorder(root, vec);
        return vec;
    }
};