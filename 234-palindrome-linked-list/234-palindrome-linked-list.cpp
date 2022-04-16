/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* revList(ListNode* node)
    {
        ListNode* result = nullptr;
        while(node)
        {
            ListNode* temp = node->next;
            node->next = result;
            result = node;
            node = temp;
        }
        return result;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast->next and fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next = revList(slow->next);
        slow = slow->next;
        while(slow) {
            if(head->val != slow->val)
                return false;
            head = head->next;
            slow = slow->next;
        }
        return true;
    }
};