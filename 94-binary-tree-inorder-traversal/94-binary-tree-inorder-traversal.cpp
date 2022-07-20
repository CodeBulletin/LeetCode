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
    void inorder(TreeNode* Tree, vector<int>& vec) {
        if(Tree->left != nullptr) {
            inorder(Tree->left, vec);
        }
        vec.push_back(Tree->val);
        if(Tree->right != nullptr){
            inorder(Tree->right, vec);
        }
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vec;
        if(root != nullptr) inorder(root, vec);
        return vec;
    }
};