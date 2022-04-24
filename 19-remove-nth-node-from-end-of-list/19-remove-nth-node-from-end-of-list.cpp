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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *current=head,*temp=head;
        for(int i=0;i<n;i++){
            current=current->next;
        }
        if(current==NULL)
            return temp->next;
        while(current->next){
            current=current->next;
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};