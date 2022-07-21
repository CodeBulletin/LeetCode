/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution {
    public bool IsSymmetric(TreeNode root) {
        return AreNodesSymmetric(root.left, root.right);   
    }

    private static bool AreNodesSymmetric(TreeNode left, TreeNode right) {
        if (left == null || right == null) {
            return left == right;
        }
        else {
            return (
                left.val == right.val
                && AreNodesSymmetric(left.left, right.right) 
                && AreNodesSymmetric(left.right, right.left) 
            );
        }
    }
}