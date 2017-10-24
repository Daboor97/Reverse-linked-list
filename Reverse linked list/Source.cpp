#include <iostream>
using namespace std; 

struct node {
	int data; 
	node* next; 
};
node* head; 

void print() {
	if (head == NULL) cout << "There's no data to print " << endl; 
	else{
		node* temp = head; 
		while (temp!=NULL)
		{
			cout << temp->data; 
			temp = temp->next; 
		}
	}
}

void insert(){
	node* newnode = new node; 
	cout << "Integer: "; cin >> newnode->data;
	newnode->next = NULL; 
	if (head == NULL) head = newnode; 
	else{
		node* temp = head; 
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
   	  }
}

void reverse() {
	 node* previous=NULL ;
	 node* current = head;
	 node* next;
	while (current != NULL)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	head = previous;
}

void main() {
	for (size_t i = 0; i < 3; i++)
	insert();
	cout << "Linked list: "; print(); cout << endl; 
	reverse(); 
	cout << "Reversed linked list: "; print(); cout << endl; 
	system("pause"); 
}