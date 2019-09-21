struct node* temp5 = head;
struct node* temp4=head;
struct node* findsunode(int data){
	if(data > temp4->data){
		if(data == temp4->right->data)
		return temp4;
		if(data != temp4->right->data){
			temp4=temp4->right;
			findsunode(data;)
		}
	}
	if(data < temp4->data){
		if(data == temp4->left->data)
		return temp4;
		if(data != temp4->left->data){
			temp4=temp4->left;
			findsunode(data;)
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
int findtocopy2(struct node* clock){
	if(clock->left==NULL){
		return clock->data;
	}
	if(clock->left!=NULL){
		findtocopy(clock->left);
	}
}

void delete(int data){
	struct node* temp = findnodeof(data);
	if(temp->left==NULL & temp2->right == NULL){
		struct node* temp3  = findsunode(data);
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
	if(temp->left!=NULL & temp2->right == NULL){
		struct node* temp5 = temp->left;
		int x = findtocopy(temp2);
		temp->data=x;
		dalete(x);
	}
	if(temp->left==NULL & temp2->right != NULL){
		struct node* temp6 = temp->right;
		int y = findtocopy2(temp2);
		temp->data=y;
		dalete(x);
	}
	if(temp->left!=NULL & temp2->right != NULL){
		struct node* temp5 = temp->left;
		int x = findtocopy(temp2);
		temp->data=x;
		dalete(x);
	}
	
}

