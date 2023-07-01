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
int getLength(LinkedListNode<int>* &head){

    LinkedListNode<int>* temp=head;

    int count=0;

    while(temp!=NULL){

        count++;

        temp=temp->next;

    }

    return count;

}

 

bool isPalindrome(int *arr,int n){

    int s=0;

    int e=n-1;

    while(s<e){

        if(arr[s]!=arr[e]){

            return 0;

        }

        s++;

        e--;

    }

    return 1;

}

 

bool isPalindrome(LinkedListNode<int> *head) {

    int size=getLength(head);

    int arr[size];

    int i=0;

    LinkedListNode<int>* temp=head;

    while(temp!=NULL){

        arr[i++]=temp->data;

        temp=temp->next;

    }

 

    if(isPalindrome(arr,size)==0){

        return false;

    }

    else{

        return true;

    }

 

}
