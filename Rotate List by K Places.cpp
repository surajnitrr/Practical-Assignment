// Rotate list Right by K places
class Solution {
public:
    ListNode*rotateRight(ListNode*head,int k) {
        if(head==NULL)
        return head;
        ListNode*curr=head;
        int n=1;
        while(curr->next) {
            n++;
            curr=curr-next;
        }
        k=k%n;
        curr-next=head;
        curr=head;
        for(int i=1;i<n-k;i++) {
            curr=curr->next;
        }
        head=curr->next;
        curr->next=NULL;
        return head;
    }
};