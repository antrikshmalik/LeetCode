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
  let start = head;
  let hare = head, tortoise = head;
  while(true){
    tortoise = tortoise.next;
    hare = hare.next;
    if(hare === null || hare.next === null) {
      return null;
    } else {
      hare = hare.next;
    }
    if(tortoise === hare) break;
  }
  while(start!==tortoise){
    start = start.next;
    tortoise = tortoise.next;
  }
  return start;
};