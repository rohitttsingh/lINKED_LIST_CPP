#include<bits/stdc++.h>

using namespace std;
struct Node{
	int data;
	 Node* next;
};		

 Node * creation( Node ** head,int data){
	
	 Node * Newnode = new Node();
	Newnode->data=data;
	Newnode->next=*head;
	*head=Newnode;

	return Newnode;
}

void printingNode( Node * head){
	 Node * temp = head;
	while(temp!=NULL){
		
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
void PRINTINGREVERSE(Node * head){

if(head==NULL)
return;
	
	PRINTINGREVERSE(head->next);
	
		cout<<head->data<<" ";

}

void InsertInBetweenAFTER (Node * head , int data, int position){
	Node * newNode = new Node();
	newNode->data=data;
	Node * temp =head;


	while(temp!=NULL){
		if(temp->data==position){
			newNode->next=temp->next;
			temp->next=newNode;
			return;
		}
		
		
		temp=temp->next;
	}
	
}

void insertinBetweenBefore (Node * head , int data, int position){
	Node * newNode = new Node();
	newNode->data=data;
	Node * temp =head;

	while(temp!=NULL){
		if(temp->next->data==position){

			newNode->next=temp->next;
			temp->next=newNode;
			return;
		}
		
		temp=temp->next;
	}
}
void insertatend(Node *head,int data){
	Node * newNode = new Node();
	newNode->data=data;
	Node * temp =head;
	
	while(temp!=NULL){
		if(temp->next==NULL){
			newNode->next=NULL;
			temp->next=newNode;
			
			return;
		}
		temp=temp->next;
	}
	
}
void deletenodeafter(Node *head,int position){
	Node * temp =head;
	
	while(temp!=NULL){
		if(temp->data==position){
			
			free(temp->next);
			temp->next=temp->next->next;
			
			return ;
		}
		temp=temp->next;
	}
	
}
void deletenodebefore(Node *head,int position){
	Node * temp =head;
	
	while(temp!=NULL){
		if(temp->next->next->data==position){
			
			free(temp->next);
			temp->next=temp->next->next;
			
			return ;
		}
		temp=temp->next;
	}
	
}
void deletenodeatend(Node *head){

	Node * temp =head;
	
	while(temp!=NULL){
		if(temp->next->next==NULL){
			
			free(temp->next);
			temp->next=NULL;
			
			return;
		}
		temp=temp->next;
	}
	
}

int main()
{  Node* head = NULL;

creation(&head,5);
creation(&head,6);
creation(&head,7);
creation(&head,8);
creation(&head,2);
creation(&head,1);

//PRINTING ORIGINAL LL  " LL = lINKED LIST"
cout<<"Original Linked List \n";
printingNode(head);

//INSERT AFTER A NODE 
InsertInBetweenAFTER(head,9,8);
cout<<"\n";
cout<<"Inserting 9 Node After 8 \n";
printingNode(head);

//INSERT BEFORE A NODE 
insertinBetweenBefore(head,10,8);
cout<<"\n";
cout<<"Inserting 10 Node Before 8 \n";
printingNode(head);

//INSERT AT THE END 
insertatend(head,11);
cout<<"\n";
cout<<"Inserting 11 Node at End \n";
printingNode(head);

//DELETE AFTER A NODE 
deletenodeafter(head,8);
cout<<"\n";
cout<<"Delete 9 Node after 8 \n";
printingNode(head);

//DELETE BEFORE A NODE 
deletenodebefore(head,8);
cout<<"\n";
cout<<"Delete 10 Node before 8 \n";
printingNode(head);

//DELETE AT THE END
deletenodeatend(head);
cout<<"\n";
cout<<"Delete 11 Node at end \n";
printingNode(head);

//PRINTNG REVERSE
cout<<"\n";
cout<<"Print in Reverse \n";
PRINTINGREVERSE(head);
return 0;
}
