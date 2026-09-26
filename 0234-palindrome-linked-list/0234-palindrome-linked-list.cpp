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
    bool isPalindrome(ListNode* head) {
        string s = "";
        ListNode* temp = head;
        while(temp != nullptr)
        {
            int digit = temp->val;
            char c = digit - '0';
            s.push_back(c);
            temp = temp->next;
        }
        for(int i = 0;i<s.length()/2;i++)
        {
            if(s[i] != s[s.length()-i-1]) return false;
        }
        return true;
    }
};