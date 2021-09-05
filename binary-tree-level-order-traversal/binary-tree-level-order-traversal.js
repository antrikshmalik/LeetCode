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
 * @return {number[][]}
 */
const levelOrder = function (root) {
  if (!root) return [];
  let arr = [], q = [root];
  while(q.length > 0){
    let count = 0, subArray = [], len = q.length;
    while(count<len){
      let node = q.shift();
      subArray.push(node.val);
      if (node.left) q.push(node.left);
      if (node.right) q.push(node.right);
      count++;
    }
    arr.push(subArray);
  }
  return arr;
};