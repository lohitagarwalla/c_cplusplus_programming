#include<stdio.h>
#include<stdlib.h>

struct list{
	int data;
	struct list* link;
};
struct list* head;
struct list* rev;
void insert(int data){
	list* temp = new list();
	temp->data = data;
	temp->link=head;
	head=temp;
}
void print()
{
	struct list* temp = head;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->link;
	}
}
void reverse(){
	struct list* temp = head;
	//struct list* tem = rev;
	while(temp!=NULL){
		list* tem = new list();
		tem->data=temp->data;
		tem->link=rev;
		rev=tem;
		temp=temp->link;		
	}
}
void printrev(){
	struct list* temp = rev;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->link;
	}
}

int main()
{
	head=NULL;
	insert(5);
	insert(6);
	insert(23);
	insert(100);
	print();
	printf("\nreverse\n");
	reverse();
	printrev();
}
