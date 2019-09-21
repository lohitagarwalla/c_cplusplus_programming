// LINKED LIST: NODE WITG THE ADDRESSOF BOTH LEFT AND RIGHT ELEMENT;
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* left;
	struct node* right;
};

struct node* head;

void insert(int n){
	struct node* temp = new node();
	temp->data=n;
	if(head==NULL){
		temp->right=NULL;
		temp->left=NULL;
		head=temp;
		return;
	}
	temp->left=NULL;
	temp->right=head;
	head=temp;
	struct node* temp2;
	temp2=temp->right;
	temp2->left=temp;
}


void print(){
	struct node* temp = head;
	while(2)
	{
		printf("%d  " ,temp->data);
		temp=temp->right;
		if(temp->right==NULL){
			break;
		}
	}
	printf("%d  " ,temp->data);
	printf("\n");
	while(2){
		printf("%d  " ,temp->data);
		temp=temp->left;
		if(temp->left==NULL){
			break;
	}
	}
	printf("%d  " ,temp->data);
}


int main(){
	
	head=NULL;
	
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	insert(8);
	insert(9);
	insert(0);
	
 	print();
	
}
