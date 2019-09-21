// to delete nth number in a linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* link;
};

struct node* head;
void insert(int data){
	struct node* temp = new node();
	temp->data=data;
	temp->link=head;
	head=temp;
}

void deleted(int n){
	node* temp = head;
	if(n==1){
		head=temp->link;
		free(temp);
		return;
	}
	
	for(int i=0;i<n-2;i++)
	{
	temp=temp->link;
	}
	node* temp2=temp->link;
	temp->link=temp2->link;
	free(temp2);
	
}

void print(){
	struct node* temp = head;
	while(temp!=NULL){
	printf("%d  ",temp->data);
	temp=temp->link;
	}
	printf("\n");
}

void del(int n){
	node* temp = head;
	int p=0;
	node* temp2;
	while(1){
		if(temp->data==n){
			break;
		}
		temp2=temp;
		temp=temp->link;
		p++;
		
	}
	if(p==0){
		head=temp->link;
		free(temp);
		return;
	}
	temp2->link=temp->link;
	free(temp);
}
 
int main(){
	head=NULL;
	insert(6);
	insert(5);
	insert(3);
	insert(4);
	insert(5); 
	insert(6);
	insert(7);
	insert(9);
	insert(87);
	insert(56);
	insert(46);
	insert(37);
	print();
	
	deleted(1); // to delete tne nth position element
	print();
	deleted(2);
	print();
	
	del(5); // the delete the node that contains given element
	print();
	del(9);
	print();
	del(6); 
	print();
	del(3);
	print();
}
