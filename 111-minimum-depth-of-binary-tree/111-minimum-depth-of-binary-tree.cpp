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
    int minDepth(TreeNode* root) {
        if (!root) {
            return 0;
        }
        int depth = 0;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            depth++; 
            int numNode = q.size();
            for (int i = 0; i < numNode; ++i) {
                TreeNode* currentNode = q.front();
                q.pop();
                if (!currentNode->right && !currentNode->left) {
                    return depth;
                }
                if (currentNode->right) {
                    q.push(currentNode->right);
                }
                if (currentNode->left) {
                    q.push(currentNode->left);
                }
            }
        }
        return 0;
    }
};