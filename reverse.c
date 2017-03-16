#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
struct node *tail=NULL;
void insert(int x);
void reverse();
void print();

void main()
{
	insert(10);
	print();
	insert(11);
	print();
	insert(12);
	print();
//	reverse();
//	print();
	
}


void insert(x)
{
		struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	temp->data=x;
		if(head==NULL)
	{
	   head=temp;
	   tail=temp;
	}
	else
	{
		tail->next=temp;
	//	temp->prev=tail;
		tail=tail->next;
	}
}

void print()
{
	struct node *p;
	p=head;
	while(1)
	{
		
		printf("%d ",p->data);
	//	printf("%x ",p);
	if(p->next==NULL)
		break;
		
		p++;
	}
	printf("\n");
}

//void reverse()
//{
//	struct node *temp1=NULL;
//		struct node *temp2=NULL;
//		temp1=head;
//		temp2=head;
//		while(temp1!=NULL)
//		{
//		
//			temp1=temp1->next;
//			temp1->next=temp2;
//				if(temp2==head)
//			{
//				temp2->next=NULL;
//			}
//			
//			temp2=temp1;
//		}
//}
