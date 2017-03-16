#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *left;
struct node *right;	
int h;
};
struct node* insert(struct node *n,int k);
struct node* createNode(int d);
int max(struct node* root);
int search(struct node *start,int value);

int preorder(struct node *root);
int leftTree(struct node *root);
int rightTree(struct node *root);

int height=0;
int mheight=-1;
void main()
{
	struct node *root=NULL;
//	printf("%d",root);
   root=insert(root,50);
   printf("\n");
   insert(root,40);
    printf("\n");
   insert(root,55);
    printf("\n");
   insert(root,30);
    printf("\n");
   insert(root,31);
    printf("\n");
   insert(root,90);
    printf("\n");
    printf("Max element is %d",max(root));
    printf("\n");
     printf("Min element is %d",min(root));
     printf("\n");
      printf("Height is %d",mheight);
        printf("\n");
        search(root,39);
        printf("Preorder Traversal\n");
        preorder(root);
	getch();
}

struct node* insert(struct node *n,int k)
{
	if(n==NULL)
	{
	return createNode(k);
	}

	else if(k<n->data)
	{
		height++;
		 printf("%d\n",n->data);
		  n->left=insert(n->left,k);
	}
	else if(k>n->data)
	{
		height++;
		printf("%d\n",n->data);
		 n->right=insert(n->right,k);
	}
	
	return n;
}

struct node* createNode(int d)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->left=temp->right=NULL;
	temp->data=d;
	temp->h=height;
	
	if(height>mheight)
	mheight=height;
	
	height=0;
	
	printf("%d\n",temp->data);
	return temp;
}

int max(struct node* root)
{
while(1)
{
	if(root->right==NULL)
	{
	return root->data;
	break;	
	}
	else if(root==NULL)
	{
		printf("Tree Empty");
		return 0;
	}
	
	
	root=root->right;
	
	
	}	
}


int min(struct node* root)
{
while(1)
{
	if(root->left==NULL)
	{
	return root->data;
	break;	
	}
	else if(root==NULL)
	{
		printf("Tree Empty");
		return 0;
	}
	
	
	root=root->left;
	
	
	}	
}

int search(struct node *start,int value)
{
	if(start==NULL)
	{
		printf("Tree Empty");
		return 0;
	}
	else if(start->data==value)
	{
		printf("Value %d found",value);
		return value;
	}
	else if(start->left==NULL || start->right==NULL)
	{
		printf("Value %d Not Found",value);
		return 0;
	}
	else if(value<start->data)
	{
		search(start->left,value);
	}
	else if(value>start->data)
	{
		search(start->right,value);
	}
	
//	return 0;
}

int preorder(struct node *root)
{
	printf("%d\n",root->data);
	
	if(root->left==NULL && root->right==NULL)
	return 1;

	if(root->left==NULL)
	return 1;
	if(root->right==NULL)
	return 1;
	leftTree(root->left);
	rightTree(root->right);
}

int leftTree(struct node *root)
{
//	printf("%d\n",root->data);

	return preorder(root);
}
int rightTree(struct node *root)
{
	//printf("%d\n",root->data);

return 	preorder(root);
}
