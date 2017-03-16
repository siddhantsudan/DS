#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	struct node *next;
	char data;
};
struct node *head=NULL;
struct node *tail=NULL;
struct node *x=NULL;
void addItem(char item);
void display();
void removeBack();
void addFront(char item);
void removeFront();

main()
{
	//addItem('s');
//	addItem('i');
	addFront('y');
	addFront('z');
	removeFront();
		removeFront();
			removeFront();
	display();
	//removeBack();
//	removeBack();
	//removeBack();
	//display();
	getch();
}

void addItem(char item)
{

struct node *temp=(struct node*)malloc(sizeof(struct node));
temp->data=item;
temp->next=NULL;
if (head==NULL)
	{
		head=temp;
		tail=temp;
		
	}
	else
	{
		tail->next=temp;
		tail=tail->next;
//		struct node *t=head;
//		while(true)
//		{
//			if(t->next==NULL)
//			{
//				t->next=temp;
//				break;
//			}
//			t=t->next;
//			 
//		}
	}
}


void removeBack()
{
	if(head==NULL)
	{
		printf("Empty");
		return;
	}
	if(head==tail)
	{
		//free(head);
		head=NULL;
		return;
		//tail=NULL;
		
	}
	x=head;
	while(1)
	{
		if(x->next==tail)
		{
		x->next=NULL;
	//	free(tail);
		tail=x;
		break;
		}
		x=x->next;
		
	
		
		
		
		}	
}

void display()
{
	x=head;
	printf("\n");
	while(x!=NULL)
	{
		printf("%c ",x->data);
		x=x->next;
	}
}

void addFront(char item)
{
	x=head;
struct node *temp=(struct node*)malloc(sizeof(struct node));
temp->data=item;
temp->next=NULL;

	if(head==NULL)
{
	head=temp;
}
	else
	{
		temp->next=head;
		head=temp;
	}
}

void removeFront()
{
	if(head==NULL)
	{
		printf("Empty");
	}
	else
	{
		head=head->next;
		
	}
}
