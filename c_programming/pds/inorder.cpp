#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct node* head;
void check(int data){
	struct node* node = head;
		if(data < node->data && node->left!=NULL){
			node=node->left;
			check(data);
		}
		if(data > node->data && node->right!=NULL){
			node=node->right;
			check(data);
		}
		if(node->data > data && node->left==NULL){
			node* temp = new node();
			temp->data=data;
			temp->left=NULL;
			temp->right=NULL;
			node->left=temp;
			break;
		}
		if(data > node->data && node->right!=NULL){
			node* temp = new node();
			temp->data=data;
			temp->left=NULL;
			temp->right=NULL;
			node->right=temp;
			break;
		}
}

void insert(int data){
	if(head==NULL){
		node* temp = new node();
		temp->data=data;
		temp->left=NULL;
		temp->right=NULL;
		head=temp;
		return;
	}
	check(data);
}
void check(int data){
	struct node* node = head;
		if(data < node->data && node->left!=NULL){
			node=node->left;
			check(data);
		}
		if(data > node->data && node->right!=NULL){
			node=node->right;
			check(data);
		}
		if(node->data > data && node->left==NULL){
			node* temp = new node();
			temp->data=data;
			temp->left=NULL;
			temp->right=NULL;
			node->left=temp;
			break;
		}
		if(data > node->data && node->right!=NULL){
			node* temp = new node();
			temp->data=data;
			temp->left=NULL;
			temp->right=NULL;
			node->right=temp;
			break;
		}
}
void inorder(struct node* node){
	if(node==NULL){
		return;
	}
	inorder(node->left);
	printf("%d  ",node->data);
	inorder(node->right);
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
	printf("\n print inorder\n");
	inorder(head);
/*	printf("\n print preorder\n")
	preorder(head);
	printf("\n print postorder\n")
	postorder(head);*/
}
