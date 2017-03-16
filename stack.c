#include<stdio.h>
#include<conio.h>
#define SIZE 3
void push( int x);
void pop();
void print();

int a[SIZE];
int top=-1;
void main()
{
	push(10);
	print();
	push(20);
		print();
	push(30);
		print();
		push(50);
	pop();
	pop();
	pop();
	pop();
	
	getch();
}

void push(x)
{
	if(top==(SIZE-1))
	printf("Stack Overflow\n");
	else
	{
		top++;
		a[top]=x;
	}
}
void pop()
{
	if(top==-1)
	printf("Stack is Empty\n");
	else
	{
	printf("Popped ot %d\n",a[top]);
	top--;
	}

}
void print()
{
	int x=0;
	for(x=0;x<=top;x++)
	{
		printf("%d ",a[x]);
	}
	printf("\n");
}
