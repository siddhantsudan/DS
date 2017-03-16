#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
int data;
struct node *next;	
};

struct node *head=NULL;
struct node *t=NULL;
void display();
struct node* addBack(int d);
void addAfter(struct node* x,int data);
void addFront(int data);
main()
{
//	addBack(10);
	//	addBack(20);
		//	addBack(30);
		addFront(10);
		addFront(20);
		struct node *y=addBack(30);
		addBack(40);
		addAfter(y,100);
			display();
	getch();
}

struct node* addBack(int data)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=NULL;
if(head==NULL)
{
	head=temp;
	head->next=head;
}
else
{
	t=head;
	while(t->next!=head)
	{
		t=t->next;
	}
	temp->next=head;
	t->next=temp;
}

return temp;
}
void display()
{
	printf("\n");
	int i=0;
	t=head;
	for(i=0;i<10;i++)
	{
		printf("%d ",t->data);
		t=t->next;
	}
}

void addFront(int data)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		temp->next=head;
	}
	else
	{
			t=head;
	while(t->next!=head)
	{
		t=t->next;
	}
//	temp->next=head;
//	t->next=temp;
	
		temp->next=head;
		head=temp;
		t->next=head;
		
		
		
	}
}

void addAfter(struct node* x,int data)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=NULL;
	
	temp->next=x->next;
	x->next=temp;
	
	
}
