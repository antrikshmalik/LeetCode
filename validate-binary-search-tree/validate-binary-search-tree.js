/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {boolean}
 */
const dfs = function (node, lower, upper) {
  if(node.val<=lower || node.val >= upper) return false;
  if(node.left) {
    if(!dfs(node.left, lower, node.val)) return false;

  }
  if(node.right){
    if(!dfs(node.right, node.val, upper)) return false;
  }
  return true;
}

const isValidBST = function (root) {
  if(!root) return tree;
  return  dfs(root, -Infinity, Infinity)
};