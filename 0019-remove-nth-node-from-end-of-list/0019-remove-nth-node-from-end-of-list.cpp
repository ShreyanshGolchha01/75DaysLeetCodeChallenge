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
    ListNode* removeNthFromEnd(ListNode* head, int k) {
        ListNode* temp = head;
        int n = 0;
        while(temp != nullptr)
        {
            n++;
            temp = temp->next;
        } 
        temp = head;
        if(n-k == 0) return head->next;
        for(int i = 1;i<n-k;i++)
        {
            temp = temp->next;
        }
        if(temp->next == nullptr) {head = nullptr;return head;}
        temp->next = temp->next->next;
        return head;
    }
};