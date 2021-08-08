/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} head
 * @return {ListNode}
 */
const detectCycle = function (head) {
  if (head === null ) return null;
  let currentNode = head;
  let visitedNodes = new Set();
  while (!visitedNodes.has(currentNode)){
    if (currentNode.next === null){
      return null;
    }
    visitedNodes.add(currentNode);
    currentNode = currentNode.next;
  }
  return currentNode;
};