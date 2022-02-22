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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *temp,*temp1;
        temp=head;
        while(temp){
            if(temp->val==0)
                temp1=temp;
            else
               { temp1->val=temp->val+temp1->val;
               temp1->next=temp->next;}
            temp=temp->next;
        }
        temp=temp1=head;
        while(temp){
            if(temp->val!=0)
            {temp1=temp;
            temp=temp->next;}
            else{
                temp1->next=NULL;
                temp=temp->next;
            }
        }
        return head;
    }
};