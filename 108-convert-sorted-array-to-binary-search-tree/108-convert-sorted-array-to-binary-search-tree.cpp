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
    TreeNode* make_tree(vector<int>& nums, int low, int high){
        if(low > high){
            return nullptr;
        }
        
        int mid = (low + high)/2;
        
        TreeNode* node = new TreeNode(nums[mid]);
        
        node->left  = make_tree(nums, low, mid - 1);
        node->right = make_tree(nums, mid + 1, high);
        return node;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int low = 0, high = nums.size()-1;
        return make_tree(nums, low, high);
    }
};