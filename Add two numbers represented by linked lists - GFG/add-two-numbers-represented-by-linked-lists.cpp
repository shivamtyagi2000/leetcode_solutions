// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    struct Node *reverse(struct Node *head){
        Node *curr,*prev,*nex;
        curr=head;
        prev=nex=NULL;
        while(curr){
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        return prev;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first=reverse(first);
        second=reverse(second);
        int carr=0,sum;
        struct Node *head=new Node(-1);
        struct Node *res=head;
        while(first&&second){
            sum=first->data+second->data+carr;
            carr=sum/10;
            sum=sum%10;
            head->next=new Node(sum);
            first=first->next;
            head=head->next;
            second=second->next;
        }
        while(first){
            sum=first->data+carr;
            carr=sum/10;
            sum=sum%10;
            head->next=new Node(sum);
            head=head->next;
            first=first->next;
        }
        while(second){
            sum=second->data+carr;
            carr=sum/10;
            sum=sum%10;
            head->next=new Node(sum);
            head=head->next;
            second=second->next;
        }
        if(carr>0)
        {
            head->next=new Node(carr);
            head=head->next;
        }
        return reverse(res->next);
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends