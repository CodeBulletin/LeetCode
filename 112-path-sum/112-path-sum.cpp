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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr)
            return false;
        
        stack<pair<TreeNode*, int>> s;
        s.push({root, root->val});
        
        while (!s.empty()) {
            TreeNode *n = s.top().first;
            int sum = s.top().second;
            
            s.pop();
            
            if (n->left == nullptr && n->right == nullptr && sum == targetSum)
                return true;
            
            if (n->left != nullptr)
                s.push({n->left, sum + n->left->val});
            if (n->right != nullptr)
                s.push({n->right, sum + n->right->val});
        }
        
        return false;
    }
};