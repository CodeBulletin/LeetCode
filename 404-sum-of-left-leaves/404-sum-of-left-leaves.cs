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
    public int sum;
    
    public static bool isLeaf(TreeNode node) {
        return node.left == null && node.right == null; 
    }
    
    public void Sum(TreeNode node, bool dir) {
        if(isLeaf(node) && dir) {
            Console.WriteLine(node.val);
            this.sum += node.val;
            return;
        }
        if(node.left != null) {
            Sum(node.left, true);
        }
        if(node.right != null)
            Sum(node.right, false);
    }
    public int SumOfLeftLeaves(TreeNode root) {
        this.sum = 0;
        if(root != null)
            Sum(root, false);
        return this.sum;
    }
}