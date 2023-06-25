#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    Node<int>* head=NULL;
    Node<int>* last=NULL;
    if(!first)return second;
    if(!second)return first;
    if(first->data<=second->data){
        head=first;
        last=first;
        first=first->next;
    }
    else{
        head=second;
        last=second;

        second=second->next;
    }

    while(second && first){
        if(second->data<first->data)
        {last->next=second;
        last=second;
        second=second->next;}
        else{
            last->next=first;
            last=first;
            first=first->next;
        }
        last->next=NULL;
        
    }
    if(first)last->next=first;
    if(second)last->next=second;
    return head;
}
