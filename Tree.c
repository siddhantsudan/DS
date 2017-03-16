#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
int data;
struct node *right;
struct node *left;	
struct node *p;
};

struct node *tp=NULL;
struct node *root=NULL;
struct node* insert(struct node *root,int data);
void tra(struct node *root);

void removee(struct node *root,int data);

int findmax(struct node *root);
int findmin(struct node *root);
int max(int x,int y);
int height(struct node *root);
int successor(struct node *root,int data);
int pre(struct node *root,int data);


struct node *findminimum(struct node *root);

main()
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	root=temp;
	root->data=100;
	root->left=NULL;
	root->right=NULL;
	root->p=NULL;
	
	insert(root,50);
	insert(root,120);
	insert(root,40);
	insert(root,60);
	insert(root,115);
	insert(root,130);
	insert(root,30);
	insert(root,70);
	insert(root,128);
	insert(root,140);
	insert(root,80);

//	insert(root,80);
//	insert(root,120);
//	insert(root,70);
//	insert(root,85);
//	insert(root,130);
//	insert(root,75);
//	insert(root,76);
//    insert(root,77);

//
//	insert(root,200);
//	insert(root,150);
//	insert(root,140);
//	
	
	

	//tra(root);
	printf("\nMin is %d",findmin(root));
		printf("\nMax is %d",findmax(root));
			printf("\nheight is %d\n",height(root));
		//	printf("\nSuccessor is %d",successor(root,200));
		//	printf("\nPre is %d\n",pre(root,200));
			
			tra(root);
			
			removee(root,120);
	printf("\n");
	tra(root);
	
	
	getch();
	
}

struct node* insert(struct node *root,int data)
{
//	struct node *temp=(struct node*)malloc(sizeof(Struct node));
	//temp->data=data;
//	temp->left=NULL;
//	temp->right=NULL;
if(root==NULL)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
	if(data<root->data)
	{
		//if(root->left==NULL)
	//	tp=root;
		
	root->left=insert(root->left,data);
	root->left->p=root;
		//root.left=
	}
	else
	{
	//	if(root->right==NULL)
	//	tp=root;
		
		root->right=insert(root->right,data);
		root->right->p=root;
	}
	return root;
	
}

void tra(struct node *root)
{
	if(root==NULL)
	return;
	
	printf("%d ",root->data);
	tra(root->left);
	tra(root->right);
}

int findmin(struct node *root)
{
	if(root->left==NULL)
	return root->data;
	
int y=findmin(root->left);
	//printf("1 ");
	
	return y;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
	
}
int findmax(struct node *root)
{
	
	if(root->right==NULL)
	return root->data;
	
int y=findmax(root->right);
	//printf("1 ");
	
	return y;        
}

//int height(struct node *root,int level)
//{
//	if(root==NULL)
//	return level;
//	
//	if(root!=NULL)
//	level++;
//	
//int l=height(root->left,level);
//int r=height(root->right,level);
//
//return max(l,r);
//}

int max(int x,int y)
{
	if(x>y)
	return x;
	else if (x<y)
	return y;
	
	return x;
}

int height(struct node *root)
{
	if (root==NULL)
	return -1;
	
	return max(height(root->left),height(root->right))+1;
}

int successor(struct node *root,int data)
{
	if(data<root->data)
 	return successor(root->left,data);
	else if(data>root->data)
	 return successor(root->right,data);
	else
	{
		struct node *target=root;
		if(target->right!=NULL)
		{
			return findmin(target->right);
			
		}
		else
		{
		struct node *x=target;
			struct node *y=target->p;
			while(y!=NULL && x==y->right)
			{
				x=y;
				y=y->p;
			}
			
			if(y==NULL)
			return -1;
			else
			return y->data;
		}
	}
	
//	return -1;
	
	
}

int pre(struct node *root,int data)
{
		if(data<root->data)
 	return pre(root->left,data);
	else if(data>root->data)
	 return pre(root->right,data);
	else
	{
		struct node *target=root;
		if(target->left!=NULL)
		{
			return findmax(target->left);
			
		}
		else
		{
		struct node *x=target;
			struct node *y=target->p;
			while(y!=NULL && x==y->left)
			{
				x=y;
				y=y->p;
			}
			
			if(y==NULL)
			return -1;
			else
			return y->data;
		}
	}
}

void removee(struct node *root,int data)
{
	if(data<root->data)
	removee(root->left,data);
	else if(data>root->data)
	removee(root->right,data);
    else
    {
    	struct node *temp=root;
    	if(temp->left==NULL && temp->right==NULL)
    	{
    		//temp=temp->p;
    		if(temp->data < temp->p->data)
    		temp->p->left=NULL;
    		else
    		temp->p->right=NULL;
		}
		else if(temp->left==NULL && temp->right!=NULL)
		{
			if(temp->data<temp->p->data)
			{
				temp->p->left=temp->right;
			}
			else
			{
				temp->p->right=temp->right;
			}
		}
		else if(temp->left!=NULL && temp->right==NULL)
		{
				if(temp->data<temp->p->data)
			{
				temp->p->left=temp->left;
			}
			else
			{
				temp->p->right=temp->left;
			}
		}
		else
		{
			struct node *min=findminimum(root->right);
			temp->data=min->data;
			removee(min,min->data);
			
		}
    	
	}
	
	
}

struct node *findminimum(struct node *root)
{
	if(root->left==NULL)
	return root;
	
struct node *y=findminimum(root->left);
	//printf("1 ");
	
	return y;       
}
