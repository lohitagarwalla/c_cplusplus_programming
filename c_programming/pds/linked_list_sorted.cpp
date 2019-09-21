#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* link;
};
struct node* head;

void print(){
	node* temp = head;
	while(1)
	{
		printf("   %d",temp->data);
		temp=temp->link;
		if(temp->link==NULL){
			printf("  %d",temp->data);
			break;
		}
	}
}

void insert(int x){
	node* temp = new node();
	if(head==NULL){
		temp->data=x;
		temp->link=NULL;
		head=temp;
		return;
	}
	node* temp2 = head;
	node* temp3 = head;
	while(1){
		if(x >  temp2->data){
			temp3=temp2;
			temp2=temp2->link;
		}
		if(temp3->link==NULL){
			break;
		}
		if(temp2->data < x){
			break;
		}
	}
	temp->data=x;
	temp->link=temp3->link;
	temp3->link=temp;
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
}
