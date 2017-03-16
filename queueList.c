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
struct node *temp=NULL;
struct node *tail=NULL;
void deq();
void enq();
void display();

main()
{
	enq(10);
	enq(20);
	enq(30);
	enq(40);
		display();
	deq();
		display();
	deq();
	display();
	getch();
}

void enq(int item)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=item;
	temp->next=NULL;
	//	printf("Added %d",temp->data);
	if(head==NULL)
	{
	
			head=temp;
			tail=temp;
			
	}
	tail->next=temp;
	tail=tail->next;
	
	

	
	
}

void deq()
{
	if(head==NULL)
	{
		printf("Empty");
	}
	else if (head==tail)
	{
	//	print("Removed %d",head->data);
		head=NULL;
		tail=NULL;
	}
	else
	{
	//	print("Removed %d",head->data);
		head=head->next;
		
	}
}

void display()
{
	printf("\n");
	temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
