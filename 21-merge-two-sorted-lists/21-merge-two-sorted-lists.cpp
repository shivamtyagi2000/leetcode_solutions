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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *h,*t;
        h=t=NULL;
        while(list1!=NULL&&list2!=NULL)
        {
            if(list1->val>=list2->val)
            {
                if(h==NULL&&t==NULL)
                {
                    h=t=list2;
                }
                else
                {
                    t->next=list2;
                    t=t->next;
                }
                list2=list2->next;
            }
            else
            {
                if(h==NULL&&t==NULL)
                {
                    h=t=list1;
                }
                else
                {
                    t->next=list1;
                    t=t->next;
                }
                list1=list1->next;
            }
           
        }
         while(list1!=NULL)
            {
                if(h==NULL&&t==NULL)
                {
                    h=t=list1;
                }
                else
                {
                    t->next=list1;
                    t=t->next;
                }
                list1=list1->next;
            }
            while(list2!=NULL)
            {
                if(h==NULL&&t==NULL)
                {
                    h=t=list2;
                }
                else
                {
                    t->next=list2;
                    t=t->next;
                }
                list2=list2->next;
            }
            if(t!=NULL)
            t->next=NULL;
            return h;
        
    }
};