/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var deleteDuplicates = function(head) {
    let currHead = head;
    
    while (currHead && currHead.next) {
		// Drop duplicates
        while (currHead && currHead.next && currHead.next.val === currHead.val) {
            currHead.next = currHead.next.next;
        }
        currHead = currHead.next;
    }
    
    return head;
};