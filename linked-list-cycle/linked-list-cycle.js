/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} head
 * @return {boolean}
 */
var hasCycle = function(head) {
  if (head === null ) return false;
  if(head.next === null) return false;
  let start = head;
  let hare = head, tortoise = head;
  while(true){
    tortoise = tortoise.next;
    hare = hare.next;
    if(hare === null || hare.next === null) {
      return false;
    } else {
      hare = hare.next;
    }
    if(tortoise === hare) return true;
  }
    return false;
};