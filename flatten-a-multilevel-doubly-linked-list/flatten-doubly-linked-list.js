/**
 * // Definition for a Node.
 * function Node(val,prev,next,child) {
 *    this.val = val;
 *    this.prev = prev;
 *    this.next = next;
 *    this.child = child;
 * };
 */

/**
 * @param {ListNode} head
 * @return {Node}
 */

const flatten = function (head) {
  let currentNode = head;
  while (currentNode){
    if(currentNode.child){
      let nextNode = currentNode.next;
      let childNode = currentNode.child;
      let startChild = childNode;
      if(nextNode === null){
        childNode.prev = currentNode;
        currentNode.next = childNode;
        currentNode.child = null;
      } else {
        while (childNode) {
          if (childNode.next === null) {
            childNode.next = nextNode;
            nextNode.prev = childNode;
            startChild.prev = currentNode;
            currentNode.next = startChild;
            currentNode.child = null;
            break;
          }
          childNode = childNode.next;
        }
      }
    }
    currentNode = currentNode.next;
  }
  return head;
};