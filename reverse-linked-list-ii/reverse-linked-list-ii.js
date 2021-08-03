/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} left
 * @param {number} right
 * @return {ListNode}
 */
let reverseBetween = function(head,left,right) {
  let position = 1, currentNode = head;
  let start = head;
  while (position<left){
    start = currentNode;
    position++;
    currentNode=currentNode.next;
  }
  let newList = null, tail = currentNode;
  while (position >= left && position <= right){
    let next = currentNode.next;
    currentNode.next = newList;
    newList = currentNode;
    currentNode = next;
    position++;
  }
  start.next = newList;
  tail.next = currentNode;
  return left > 1 ? head : newList;
}