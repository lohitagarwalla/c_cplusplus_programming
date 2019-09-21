// to insert a number in the given position in a linked list

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* link;
};

struct node* head;

print(){
	node* temp = head;
	while(temp != NULL){
	
	printf("%d  ",temp->data);
	temp = temp->link;
	}
	printf("\n");
}

void insert(int data, int n){
	node* temp = new node();
	temp->data=data;
	temp->link=NULL;
	node* temp1 = head;
	if(n!=1){
		for(int i=0;i<n-2;i++){
			temp1=temp1->link;
		}
		temp->link=temp1->link;
		temp1->link=temp;
	}
	if(n==1){
		temp->link=head;
		head=temp;
	}
}

int main()
{
	head = NULL;
	
	insert(2,1);  //insert(number to be inserted, position of insertion) 
	insert(3,2);
	insert(4,3);
	insert(5,4); 
	insert(1,1);
	insert(3,2); //1 3 2 3 4 5
	insert(4,3);
	insert(8,8);
	insert(7,8);
	insert(6,8);
	insert(10,1);
	
	print();
}
