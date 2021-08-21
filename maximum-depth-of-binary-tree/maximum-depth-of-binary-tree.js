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
 * @return {number}
 */
const recursionDepth = function (node, counter) {
  if(node === null){
    return counter;
  }
  counter++;
  return Math.max(recursionDepth(node.left, counter), recursionDepth(node.right, counter))
}

const maxDepth = function (root) {
  if(root === null) return 0;
  if(root.left === null && root.right === null){
    return  1;
  }
  return  recursionDepth(root, 0)
};