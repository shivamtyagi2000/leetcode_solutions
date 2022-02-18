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
    ListNode* reverseList(ListNode* head) {
        ListNode *current,*previous,*temp;
        previous=temp=NULL;
        current=head;
        while(current!=NULL)
        {
            temp=current->next;
            current->next=previous;
            previous=current;
            current=temp;
        }
        return previous;
    }
};