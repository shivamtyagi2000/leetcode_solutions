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
    ListNode *rev(ListNode *head){
        ListNode *pre,*temp;
        pre=temp=NULL;
        while(head){
            temp=head->next;
            head->next=pre;
            pre=head;
            head=temp;
        }
        return pre;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *slow,*fast;
        if(!head||!head->next)
            return true;
        slow=fast=head;
        while(fast->next&&fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=fast=rev(slow->next);
        while(fast){
            if(head->val!=fast->val)
                return false;
            head=head->next;
            fast=fast->next;
        }
        return true;
    }
};