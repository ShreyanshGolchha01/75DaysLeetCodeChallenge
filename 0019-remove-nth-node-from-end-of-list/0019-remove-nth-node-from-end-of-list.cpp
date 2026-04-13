/**
 * Definition for singly-linked list->
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *start = head;
        int count = 0;
        while(start!=nullptr)
        {
            count++;
            start = start->next;
        }
        start = head;
        if(count-n == 0)
        {
            return head->next;
        }
        for(int i = 1;i<count-n;i++)
        {
            start = start->next;
        }
        if(start->next == nullptr)
        {
            head= nullptr;
            return head;
        }
        else{
            start->next = start->next->next;
        }
        return head;
    }
};