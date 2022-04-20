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
    ListNode* middleNode(ListNode* head) {
   /*     ListNode *m;
        if(head){
            int count=0;
            ListNode *temp=head;
            while(temp){
                count++;
                temp=temp->next;
            }
            count/=2;
            while(count>0){
                count--;
                head=head->next;
            }
        }
        return head;*/
        
        //Better apparoch
        ListNode *slow,*fast;
        slow=fast=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};