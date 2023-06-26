#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) {
    LinkedListNode<int>* temp1=NULL;
    LinkedListNode<int>* temp=head;
    LinkedListNode<int>* temp2=NULL;
    while(temp){
        temp2=temp->next;
        temp->next=temp1;
        temp1=temp;
        temp=temp2;
    }
    return temp1;
}
