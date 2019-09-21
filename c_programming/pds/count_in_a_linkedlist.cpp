#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* link;
};
struct node* head;

void insert(int x){
	node* temp = new node();
	temp->data=x;
	temp->link=head;
	head=temp;
}

void print(){
	node* temp = head;
	while(1){
		printf("   %d",temp->data);
		temp=temp->link;
		if(temp->link==NULL){
			printf("  %d",temp->data);
			break;
		}
	}
}

int count(){
	int n=0;
	node* temp = head;
	while(temp->link!=NULL){
		n=n+1;
		temp=temp->link;
	}
	return n+1;
}
void search(int x){
	node* temp=head;
	while(1){
		if(temp->data==x);
		{
			printf("\n%d",x);
			break;
		}
	}
}

int main(){
	head=NULL;
	insert(1);
	insert(12);
	insert(25);
	insert(53);
	insert(54);
	insert(96);
	insert(45);
	insert(75);
	
	print();
	int x=count();
	printf("\n%d",x);
	search(96);
}

