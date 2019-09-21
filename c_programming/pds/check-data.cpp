#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* left;
	struct node* right;
};

struct node* head;
struct node* temp1;

void inorder(struct node* node){
	if(node==NULL){
		return;
	}
	inorder(node->left);
	printf("%d  ",node->data);
	inorder(node->right);
}

void check(int data){
	if(data > temp1->data){
		if(temp1->right==NULL){
			node* temp = new node();
			temp->data=data;
			temp->left=NULL;
			temp->right=NULL;
			temp1->right=temp;
			return;
		}
		if(temp1->right!=NULL){
			temp1=temp1->right;
			check(data);
		}
	}
	if(data < temp1->data){
		if(temp1->left==NULL){
			node* temp = new node();
			temp->data=data;
			temp->left=NULL;
			temp->right=NULL;
			temp1->left=temp;
			return;
		}
		if(temp1->left!=NULL){
			temp1=temp1->left;
			check(data);
		}
	}
}

void insert(int data){
	if(head==NULL){
		node* temp = new node();
		temp->data=data;
		temp->left=NULL;
		temp->right=NULL;
		head=temp;
	}
	temp1=head;
	check(data);
}

void preorder(struct node* temp){
	if(temp == NULL){
		return;
	}
	printf("%d ",temp->data);
	preorder(temp->left);
	preorder(temp->right);
}

int size(struct node* temp){
	if(temp==NULL){
		return 0;
	}
	return(size(temp->left) + 1 + size(temp->right)); 
}

int main(){
	head=NULL;
	insert(20);
	insert(10);
	insert(40);
	insert(5);
	insert(15);
	insert(50);
	insert(45);
	insert(42);
	insert(47);
	insert(100);
	printf("\n print inorder\n");
	inorder(head);
	printf("\n print preorder\n");
	preorder(head);
/*	printf("\n print postorder\n")
	postorder(head);*/
	int x=size(head);
	printf("\n size of tree %d: ", x);
}
