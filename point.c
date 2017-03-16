#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void main()
{
struct node *head=NULL;
struct node *temp=(struct node*)malloc(sizeof(struct node));

struct node *temp1=(struct node*)malloc(sizeof(struct node));
head=temp;
temp->data=10;
temp->next=temp1;

temp1->data=20;


printf("%d\n",head->next->data);
printf("%x",temp1->next);

getch();
}
