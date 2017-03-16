#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
	struct node *next;
	int data;
};

void push();
void pop();
void display();
struct node *head=NULL;
struct node *t=NULL;
main()
{
push(10);
push(20);
push(30);
display();
pop();
display();
pop();
display();
pop();
display();
pop();
getch();	
}

void push(int data)
{
struct node *temp=(struct node*)malloc(sizeof(struct node));
temp->next=NULL;
temp->data=data; 

if(head==NULL)
head=temp;
else
{
	temp->next=head;
	head=temp;
}
	
}

void pop()
{
	if(head==NULL)
	printf("Empty\n");
	else
	head=head->next;
}

void display()
{
	printf("\n");
	t=head;
	while(t!=NULL)
	{
		printf("%d ",t->data);
		t=t->next;
	}
}
