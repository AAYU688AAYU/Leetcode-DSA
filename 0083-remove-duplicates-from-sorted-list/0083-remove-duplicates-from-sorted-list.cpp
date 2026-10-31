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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* slow = head;

        while(slow != NULL){
            if((slow->next != NULL)  && slow->val == slow->next->val){
                ListNode* n = slow->next->next;
                ListNode* del = slow->next;
                delete(del);
                slow->next = n;

            }else{
                slow = slow->next;

            }
        }
        return head;
    }
};