#include<stdio.h>
#include<stdlib.h>

struct tree{
	int data;
	struct node* left;
	struct node* right;
};
struct tree* head;
struct tree* compare(struct tree* n,int data){
	if(data > n->data){
		if(n->right==NULL){
			return(n);
		}
		if(n->right!=NULL){
			compare(n->right,data);
		}
	}
	if(data < n->data){
		if(n->left==NULL){
			return(n);
		}
		if(n->left!=NULL){
			compare(n->left,data);
		}
	}
}

void insert(int data){
	struct tree* node = (struct tree*)malloc(sizeof(struct tree));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	if(head==NULL){
		head=node;
	}
	if(head!=NULL){
		struct tree *n=compare(head,data);
		if(data > n->data){
			n->right=node;
		}
		if(data < n->data){
			n->left=node;
		}
	}
}

int main()
{
	head=NULL;
	
	insert(10);
	insert(5);
	insert(6);
	insert(8);
	insert(20);
	insert(3);
	insert(4);
	insert(15);
	insert(25);
	insert(12);
	insert(17);
	insert(22);
	insert(28);
}
