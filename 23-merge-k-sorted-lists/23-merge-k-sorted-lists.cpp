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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL)
            return list2;
        if(list2 == NULL) 
            return list1;
        if(list1->val < list2->val) {
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        } else {
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        if(lists.size() == 0) return 0;
        queue<ListNode*> q;
        // ListNode* temp = lists[0];
        
        for(int i=0; i<lists.size(); i++) {
            q.push(lists[i]);
            // temp = mergeTwoLists(temp, lists[i]);
        }
        // return temp;
        while(q.size() > 1) {
            ListNode* a= q.front(); q.pop();
            ListNode* b= q.front(); q.pop();
            q.push(mergeTwoLists(a, b));
        }
        return q.front();
    }
};