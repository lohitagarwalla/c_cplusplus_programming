#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* link;
};
struct node* head;
void insert(int x)
{
	struct node* temp = (node*)malloc(sizeof(node));
	temp->data=x;
	if(head!=NULL){
		temp->link=head;
		head=temp;
	};
	if(head==NULL){
		temp->link=NULL;
		head=temp;
	};
	
	
}

void print(){
	struct node* temp = head;
	while(temp!=NULL){
	printf("%d",temp->data);
	temp=temp->link;
	}
	printf("\n");
}


	
int main()
{
	head = NULL;
		

	
		insert(1);
		
		print();
		insert(2);
		
		print();
		insert(3);
		
		print();
		insert(4);
		
		print();
		insert(5);
		
		print();
		
	
	
}
