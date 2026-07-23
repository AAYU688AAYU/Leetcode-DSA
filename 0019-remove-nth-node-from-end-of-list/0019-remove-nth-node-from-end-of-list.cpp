class Solution {
public:
    int getLengthOfLinkedList(ListNode* head) {
        int len = 0;
        while (head != nullptr) {
            len++;
            head = head->next;
        }
        return len;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if (head == nullptr)
            return nullptr;

        int l = getLengthOfLinkedList(head);

        if (n == l) {
            ListNode* temp = head->next;
            delete head;
            return temp;
        }

        int travel_front = l - n;
        ListNode* temp = head;
        ListNode* prev = nullptr;

        while (travel_front--) {
            prev = temp;
            temp = temp->next;
        }

        prev->next = temp->next;
        delete temp;

        return head;
    }
};