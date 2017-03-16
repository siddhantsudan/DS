#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#define SIZE 5
void Enque(int x);
void Deque();
bool IsEmpty();
bool IsFull();
int front=-1,rear=-1;
int a[SIZE];
void main()
{
	Enque(10);
		Enque(20);
			Enque(30);
			Enque(40);
			Enque(50);
			Deque();
				Enque(60);
			//	Enque(90);
				//	Deque();
		//	Deque();
		//	Deque();
		//	Deque();
		
	getch();
}

void Enque(x)
{
	if(IsEmpty())
	{
		front++;
		rear++;
	}
	else if(IsFull())
	{
		printf("Queue is Full\n");
		return;
	}
	else
	{
		
		rear=(rear+1)%SIZE;
	}
	
	a[rear]=x;
	printf("Added Element %d\n",a[rear]);
}

bool IsEmpty()
{
	if(front ==-1 && rear ==-1)
	 return true;
	 else
	 return false;
}

bool IsFull()
{
	int next=(rear+1)%SIZE;
	if(next==front)
	return true;
	else
	return false;
}

void Deque()
{

	
		if(IsEmpty())
	{
		printf("Queue is Empty\n");
		return;
	}
	printf("Removed %d\n",a[front]);
	if(front==rear)
	{
	  front=-1;
	  rear=-1;	
	  return;
	}
 front=(front+1)%SIZE;
	
}
