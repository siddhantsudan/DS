#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void push(int x);
void pop();
void display();
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head=NULL;
struct node *tail=NULL;
void main()
{
	push(15);
	display();
		push(25);
		display();
			push(35);
			display();
			pop();
			display();
			pop();
				display();
				pop();
				display();
				pop();
				display();
				
				push(16);
	display();
		push(75);
		display();
		pop();
			display();
			pop();
				display();
		
	getch();
}

void push(x)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	temp->prev=NULL;
	temp->data=x;
	if(head==NULL)
	{
	   head=temp;
	   tail=temp;
	}
	else
	{
		tail->next=temp;
		temp->prev=tail;
		tail=tail->next;
	}
}

void pop()
{
	if(tail==NULL)
	{
		printf("List is Empty");
		return;
	}
	printf("Popped out %d\n",tail->data);
	tail=tail->prev;
	
	if(tail==NULL)
	{
		head=NULL;
		return;
	}

	
	tail->next=NULL;
	
}

void display()
{
	struct node *p;
	p=head;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}

