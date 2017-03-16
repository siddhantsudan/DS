#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdbool.h>

int a[5];
int front=-1;
int rear=-1,n=5;
void enq(char item);
void deq();
void display();
bool isEmpty();
main()
{
	enq('s');
	enq('i');
	deq();
	deq();
	deq();
	enq('n');
	enq('k');
	enq('s');
	enq('i');
	enq('p');
	enq('o');
	//display();
}

void enq(char item)
{
if(isEmpty())
{
	front=0;
	rear=0;
	}
	else if((rear+1)%n==front)
	{
		printf("Full\n");
		return;
	}
	else
	{
		rear=(rear+1)%n;
		}
	a[rear]=item;
	printf("%c added\n",a[rear]);	
	
}

void deq()
{
if(isEmpty())
printf("Empty\n");
else if (front==rear)
{
	printf("%c removed\n",a[front]);
	front=-1;
	rear=-1;
}
else
{
	printf("%c removed\n",a[front]);
	front=(front+1)%n;
}

}

void display()
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%c ",a[i]);
	}
	
	
}

bool isEmpty()
{
	if(front==-1 && rear==-1)
	return true;
	else
	return false;
}
