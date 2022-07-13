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

struct node_level {
    TreeNode* node;
    int lvl;
    node_level(TreeNode* node, int lvl): node(node), lvl(lvl) {}
};

class Solution {
public:

    void new_push_back(vector<vector<int>>& vec, TreeNode* node) {
        vec.push_back(vector<int>());
        vec[vec.size() - 1].push_back(node->val);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int level = -1;
        queue<node_level> q;
        q.push(node_level(root, level + 1));
        vector<vector<int>> vec;
        if (root == nullptr) return vec;
        while (!q.empty()) {
            node_level nl = q.front();
            q.pop();
            if (level != nl.lvl) {
                new_push_back(vec, nl.node);
                level = level + 1;
            } else {
                vec[vec.size()-1].push_back(nl.node->val);
            }
            
            if (nl.node->left != nullptr) q.push(node_level(nl.node->left, level + 1));
            if (nl.node->right != nullptr) q.push(node_level(nl.node->right, level + 1));
        }
        return vec;
    }
};