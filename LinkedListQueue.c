#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void Enque(int x);
void Deque();
bool IsEmpty();

void main()
{
	Enque(10);
		Enque(20);
			Enque(30);
			Enque(40);
		//	Enque(50);
			Deque();
			Deque();
			Deque();
				Deque();
					Deque();
			//	Enque(60);
getch();	
}

void Enque(x)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	if(front==NULL)
	{
		front=temp;
		rear=temp;
	}
	else
	{
		rear->next=temp;
		rear=rear->next;
	}
	printf("Added %d\n",rear->data);
//	printf("%x\n",front);
	
}

void Deque()
{
	if(IsEmpty())
	{
		printf("Queue is Empty\n");
		return;
	}
	
//	printf("%x",front);
	printf("Removed %d\n",front->data);
	front=front->next;
	
}

bool IsEmpty()
{
	if(front==NULL)
	return true;
	else
	return false;
}
