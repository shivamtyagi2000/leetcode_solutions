/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int c1=0,c2=0,d;
        ListNode *s1,*s2;
        s1=headA;
        while(s1!=NULL)
        {
            c1++;
            s1=s1->next;
        }
        s2=headB;
        while(s2!=NULL)
        {
            c2++;
            s2=s2->next;
        }
        s1=headA;
        s2=headB;
        if(c1>c2)
        {
            d=c1-c2;
            while(d--)
            {
                s1=s1->next;
            }
        }
        else
        {
            d=c2-c1;
            while(d--)
            {
                s2=s2->next;
            }
        }
        while(s1!=s2)
        {
            s1=s1->next;
            s2=s2->next;
        }
        return s1;
        
    }
};