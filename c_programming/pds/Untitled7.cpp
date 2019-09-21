#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* link;
};

struct node* head;
struct node* hea;

void insert(int data){
	node* temp = new node();
	temp->data=data;
	temp->link=head;
	head=temp;
}

print(){
	node* temp = head;
	while(1){
		printf("%d \n",temp->data);
		temp=temp->link;
		if(temp == NULL){
			break;
		}
	}
}

print2(){
	node* temp = hea;
	while(1){
		printf("%d \n",temp->data);
		temp=temp->link;
		if(temp == NULL){
			break;
		}
	}
}


reverse(){
	node* temp = head;
	node* tem = new node();
	tem->data=temp->data;
	tem->link=hea;
	hea=tem;
	head=temp->link;
	free(temp);
	if(head!=NULL){
		reverse();
	}
}

int main(){
	head=NULL;
	insert(9);
	insert(8);
	insert(7);
	insert(6);
	insert(5);
	insert(4);
	insert(3);
	insert(2);
	insert(1);
	print();
	hea=NULL;
	printf("reverse likned list \n");
	reverse();
	print2();
	
}
