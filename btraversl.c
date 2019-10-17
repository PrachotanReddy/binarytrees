#include <stdio.h>
#include <stdlib.h>
#include "recursfun.h"
int main()
{
	int x,ch;
	NODE root;
	root = NULL;
	while(1){
		printf("1.Insert 2.All traversals \n");
		printf("Enter choice\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:printf("Enter node\n");
			scanf("%d",&x);
			root=createbintree();
			break;
			case 2:printf("Inorder\n");
			inorder(root);
			printf("Preorder\n");
			preorder(root);
			printf("Post order\n");
			postorder(root);
			break;
			default:exit(0);
		}
	}
	return 0;
}