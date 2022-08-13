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
    void preorder(TreeNode* Tree, vector<int>& vec) {
        vec.push_back(Tree->val);
        if(Tree->left != nullptr) {
            preorder(Tree->left, vec);
        }
        if(Tree->right != nullptr){
            preorder(Tree->right, vec);
        }
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> vec;
        if(root != nullptr) preorder(root, vec);
        return vec;
    }
};