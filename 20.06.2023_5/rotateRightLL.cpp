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
    int findLen(ListNode* head){
        ListNode* temp=head;
        int k=0;
        while(temp!=NULL){
            temp=temp->next;
            k++;
        }
        return k;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* tail=head;
        if(!head){return NULL;}
        int n=1;
        while(tail->next!=NULL){
            tail=tail->next;
            n++;
        }
        
        tail->next=head;
        ListNode* newHead=NULL;
        if(k=k%n){for(int i=0; i<n-k; i++){
            tail=tail->next;
        }}
        newHead=tail->next;
        tail->next=NULL;
        return newHead;
    }
};
