/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */
Node* merge(Node* head, Node * head2){
	Node* res=new Node(0);
	Node* temp=res;
	while(head && head2){
		if(head->data<head2->data){
			res->child=head;
			res=res->child;
			head=head->child;
		}
		else{
			res->child=head2;
			res=res->child;
			head2=head2->child;
		}
		
		
	}
	if(head!=NULL){
			res->child=head;
		}
		else{
			res->child=head2;
		}
	return temp->child;
	
}
Node* flattenLinkedList(Node* head) 
{
	if(!head|| !head->next){
		return head;
	}
	Node* l=flattenLinkedList(head->next);
	head->next=NULL;
	Node* s=merge(head, l);
	return s;
}
