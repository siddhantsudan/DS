#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdbool.h>

int top=-1;
int a[3];
//int size=sizeof(a)/sizeof(int);
void push(int data);
void pop();
void display();
bool IsEmpty();
main()
{
//	int* a=(int*)malloc(sizeof(int)*3);
	push(10);
	push(20);
	push(30);
	pop();
	pop();
	display();
	getch();
}


void push(int data)
{
	a[++top]=data;
//	int size=sizeof(a)/sizeof(int);
//	if(top==(size-1))
//	{
//		int b[2*size];
//		int i;
//		for( i=0;i<(size);i++)
//		{
//			b[i]=a[i];
//		}
	//a=realloc(a, 10 * sizeof(int));
		
//	}
}

void pop()
{
	if(IsEmpty())
	printf("Empty");
	else
	{
			printf("Value %d popped out",a[top]);
			top--;
	}

}

bool IsEmpty()
{
	if(top==-1)
	return true;
	else
	return false;
}

void display()
{
	int temp=0;
	while(temp!=(top+1))
	{
		printf("%d ",a[temp]);
		temp++;
	}
}
