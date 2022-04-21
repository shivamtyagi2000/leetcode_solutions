/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)
            return head;
        Node *ptr=head;
        while(ptr){
            Node *newnode=new Node(ptr->val);
            newnode->next=ptr->next;
            ptr->next=newnode;
            ptr=newnode->next;
        }
        ptr=head;
        while(ptr){
            ptr->next->random=(ptr->random)?ptr->random->next:NULL;
            ptr=ptr->next->next;
        }
        Node *oldh=head,*newh=head->next,*old_h=head->next;
        while(oldh){
            oldh->next=oldh->next->next;
            newh->next=newh->next?newh->next->next:NULL;
            oldh=oldh->next;
            newh=newh->next;
        }
        return old_h;
    }
};