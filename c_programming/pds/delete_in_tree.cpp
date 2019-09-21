#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	node* left;
	node* right;
};
struct node* head;
void insert(int x){
	node* temp = new node();
	temp->data=x;
	temp->left=NULL;
	temp->right=NULL;
	if(head==NULL){
		head=temp;
	}
	
}
int main(){
	head=NULL;
	
	insert(50);
	insert(25);
	insert(35);
	insert(10);
	insert(5);
	insert(15);
	insert(30);
	insert(45);
	insert(75);
	insert(60);
	insert(90);
	insert(65);
	insert(80);
	insert(40);
}
