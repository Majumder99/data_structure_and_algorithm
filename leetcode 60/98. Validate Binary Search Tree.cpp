/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     val: number
 *     left: TreeNode | null
 *     right: TreeNode | null
 *     constructor(val?: number, left?: TreeNode | null, right?: TreeNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.left = (left===undefined ? null : left)
 *         this.right = (right===undefined ? null : right)
 *     }
 * }
 */

function isValidBST(root : TreeNode | null) : boolean
{
    return isValid(root, Number.MIN_SAFE_INTEGER, Number.MAX_SAFE_INTEGER);

};

function isValid(root : TreeNode | null, min : number, max : number) : boolean
{
    if (root === null)
    {
        return true;
    }

    if (root.val <= min || root.val >= max)
    {
        return false;
    }

    return isValid(root.left, min, root.val) && isValid(root.right, root.val, max);
}