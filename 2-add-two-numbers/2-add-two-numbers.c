/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    int len1=0,len2=0;
    struct ListNode *temp=l1,*temp2;
    while(temp){
        len1++;
        temp=temp->next;
    }
    temp=l2;
    while(temp){
        len2++;
        temp=temp->next;
    }
    if(len1>=len2)
        temp=l1;
    else
        temp=l2;
    temp2=temp;
    len1=0;
    while(l1&&l2){
        len2=l1->val+l2->val+len1;
        len1=len2/10;
        len2%=10;
        temp->val=len2;
        temp=temp->next;
        l1=l1->next;
        l2=l2->next;
    }
    while(l1){
        len2=l1->val+len1;
        len1=len2/10;
        len2=len2%10;
        temp->val=len2;
        temp=temp->next;
        l1=l1->next;
    }
    while(l2){
        len2=l2->val+len1;
        len1=len2/10;
        len2=len2%10;
        temp->val=len2;
        temp=temp->next;
        l2=l2->next;
    }
    temp=temp2;
    while(temp->next)
        temp=temp->next;
    if(len1){
        struct ListNode *c=malloc(sizeof(struct ListNode));
        c->val=1;
        c->next=NULL;
        temp->next=c;
    }
    return temp2;
}