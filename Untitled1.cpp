#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		
		Node(int d){
		data=d;
		next=NULL;
	}
     };
     void printLinkedList(Node *head){
     	Node* temp=head;
     	while(temp!=NULL){
     		cout<<temp->data<<"->";
     		temp=temp->next;
		}
		cout<<
	 }
    int main(){
    	Node*head,*tail;//abhi object ni bna link list me hum head se tail trf move krte h
    	insert(head,'2');
    	insert(Node*head,int data){
    		if(head==NULL){
    		Node*n=new Node(data);
    		tail=head=n;
		} 
		else{
			Node*n=new Node(data);
			tail->next=n;//insertion at end 
			tail=tail->next;
		}
		     tail->data;
    	
		}
    	
	}
}
