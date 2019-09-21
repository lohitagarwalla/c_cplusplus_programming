#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* left;
	struct node* right;
};

struct linklist{
	struct node* address;
	struct linklist* link;
};

struct linklist* head2;
struct node* head;
struct node* temp1;

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
			node* temp = new node;
			temp->data=data;
			temp->right=NULL;
			temp->left=NULL;
			temp1->left=temp;
			return;
		}
		if(temp1->left!=NULL){
			temp1=temp1->left;
			check(data);
		}
	}
}

struct node* temp2;

void print(){
	printf("%d  ",temp1->data);
//	if(temp1->left==NULL && temp1->right==NULL){
//		return;
//	}
	if(temp1->left!=NULL && temp1->right==NULL){
		temp1=temp1->left;
		print();
	}
	if(temp1->right!=NULL && temp1->left==NULL){
		temp1=temp1->right;
		print();
	}
	if(temp1->left!=NULL && temp1->right!=NULL){
		linklist* aqua = new linklist();
		aqua->address=temp1;
		aqua->link=head2;
		head2=aqua;
		temp1=temp1->left;
		print();
		
		struct linklist* fina = head2;
		temp1=head2->address;
		head2=fina->link;
		free(fina);
		temp1=temp1->right;
		print();
	}
}

void printinorder(){
//	printf("%d  ",temp1->data);
	if(temp1->left==NULL && temp1->right==NULL){
		printf("%d  ",temp1->data);
//		return;
	}
	if(temp1->left!=NULL && temp1->right==NULL){
		temp1=temp1->left;
		printinorder();
	}
	if(temp1->right!=NULL && temp1->left==NULL){
		printf("%d  ",temp1->data);
		temp1=temp1->right;
		printinorder();
	}
	if(temp1->left!=NULL && temp1->right!=NULL){
		linklist* aqua = new linklist();
		aqua->address=temp1;
		aqua->link=head2;
		head2=aqua;
		temp1=temp1->left;
		printinorder();
		
		struct linklist* fina = head2;
		temp1=head2->address;
		head2=fina->link;
		free(fina);
		printf("%d  ",temp1->data);
		temp1=temp1->right;
		printinorder();
	}
}

void insert(int data){
	node* temp = new node();
	temp->data=data;
	if(head==NULL){
		temp->left=NULL;
		temp->right=NULL;
		head=temp;
		return;
	}
	temp1=head;
	check(data);
}
void printPostorder(struct node* node){
     if (node == NULL)
        return;
 
     // first recur on left subtree
     printPostorder(node->left);
 
     // then recur on right subtree
     printPostorder(node->right);
 
     // now deal with the node
     printf("%d ", node->data);
}


struct node* temp5 = head;
struct node* temp4=head;


struct node* findsunode(int data){
	if(data > temp4->data){
		if(data == temp4->right->data){
		return temp4;
		}
		if(data != temp4->right->data){
			temp4=temp4->right;
			findsunode(data);
		}
	}
	if(data < temp4->data){
		if(data == temp4->left->data){
			return temp4;
		}
		if(data != temp4->left->data){
			temp4=temp4->left;
			findsunode(data);
		}
	}
}
struct node* temp8 = head;
struct node* findnodeof(int data){
	if(temp8->data==data){
		return temp8;
	}
	if(data < temp8->data){
		temp8=temp8->left;
		findnodeof(data);
	}
	if(data > temp8->data){
		temp8=temp8->right;
		findnodeof(data);
	}
}
int findtocopy(struct node* clock){
	if(clock->right==NULL){
		return clock->data;
	}
	if(clock->right!=NULL){
		findtocopy(clock->right);
	}
}
int findtocopyy(struct node* clock){
	if(clock->left==NULL){
		return clock->data;
	}
	if(clock->left!=NULL){
		findtocopy(clock->left);
	}
}

void delete(int data){
	node* temp = findnodeof(data);
	if(temp->left==NULL && temp2->right == NULL){
		node* temp3  = findsunode(data);
		if(temp3->left->data==data){
			temp3->left==NULL;
			free(temp);
			return;
		}
		if(temp3->right->data==data){
			temp3->right=NULL;
			free(temp);
			return;
		}
	}
	if(temp->left!=NULL && temp2->right == NULL){
		node* temp5 = temp->left;
		int x = findtocopy(temp2);
		temp->data=x;
		dalete(x);
	}
	if(temp->left==NULL && temp2->right != NULL){
		node* temp6 = temp->right;
		int y = findtocopyy(temp2);
		temp->data=y;
		dalete(x);
	}
	if(temp->left!=NULL && temp2->right != NULL){
		node* temp5 = temp->left;
		int x = findtocopy(temp2);
		temp->data=x;
		dalete(x);
	}
	
}


int main(){
	head=NULL;
	insert(50);
	insert(20);
	insert(10);
	insert(15);
	insert(30);
	insert(70);
	insert(60);
	insert(80);
	insert(85);
	insert(5);
	insert(25);
	insert(40);
	insert(35);
	insert(45);
	insert(27);
	
	temp1=head;
	head2=NULL;
	printf("preorder \n");
	print();
	
	temp1=head;
	head2=NULL;
	printf("\n inorder \n");
	printinorder();
	
	printf("\n post order\n");
	printPostorder(head);
	
//	delete(27);
	printf("\n preorder \n");
	print();

}
