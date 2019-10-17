#include <stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *lchild;
	struct node *rchild;
}*NODE;
NODE createbintree(){
	NODE temp;
	int ele;
	printf("Enter the ele to be inserted\n");
	scanf("%d",&ele);
	if(ele==-1){
		return NULL;
	}
	temp = (NODE)malloc(sizeof(struct node));
	temp->data=ele;
	printf("Enter lchild of %d\n",ele );
	temp->lchild=createbintree();

	printf(" Enter right child of %d\n",ele );
	temp->rchild=createbintree();
	return temp;
}
void inorder(NODE ptr){
	if (ptr!=NULL)
	{inorder(ptr->lchild);
		printf("%d\n",ptr->data );
		inorder(ptr->rchild);
		/* code */
	}
}
void postorder(NODE ptr){
if(ptr!=NULL){
	postorder(ptr->lchild);
	postorder(ptr->rchild);
	printf("%d\n",ptr->data);
}
}
void preorder(NODE ptr){
	if(ptr!=NULL){
		
			printf("%d\n",ptr->data );
			preorder(ptr->lchild);
			preorder(ptr->rchild);
		
	}
}