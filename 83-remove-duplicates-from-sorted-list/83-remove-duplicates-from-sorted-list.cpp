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
        ListNode* temp1,*temp2,*ans=head;
        while(head!=NULL&&head->next!=NULL)
        {
            temp1=head;
            if(head->val==head->next->val)
            {
                temp2=head->next->next;
                delete temp1->next;
                temp1->next=temp2;
            }
            else
                head=head->next;
        }
        return ans;
        
    }
};