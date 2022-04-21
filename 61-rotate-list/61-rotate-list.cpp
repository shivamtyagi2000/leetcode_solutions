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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head&&head->next&&k){
            ListNode *temp,*temp2;
            int count=0;
            temp=temp2=head;
            while(temp->next){
                count++;
                temp=temp->next;
            }
            count++;
            count=count-(k%count)-1;
            while(count){
                count--;
                temp2=temp2->next;
            }
            temp->next=head;
            head=temp2->next;
            temp2->next=NULL;
            
            
        }
        return head;
    }
};