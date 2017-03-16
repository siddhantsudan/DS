#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include<conio.h>
# define SIZE 5
struct node
{
int data;   
int key;
struct node *next;
};

struct node *arr[SIZE]=
{
NULL
};

struct node *t=NULL;
int hashIndex(int key);
void insert(int key,int data);
bool search(int key);
void display();
void del(int key);
main()
{
//	int i=0;
//	for(i=0;i<5;i++)
//	{
//		printf("%d",arr[i]);
//	}
	insert(10,1000);
	insert(12,2000);
	insert(20,1500);
	insert(11,1600);
	insert(21,1700);
	insert(30,1900);
	//search(20);
	//search(11);
	display();
	del(21);
	del(20);
	del(11);
//	del(30);
	display();
	//	display();
	//printf("%d",arr[7]);
getch();
}

int hashIndex(int key)
{
	int val=key%SIZE;
	return val;
}
void insert(int key,int data)
{
	int index=hashIndex(key);
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->key=key;
	temp->next=NULL;
	
	if(arr[index]==NULL)
	{
		arr[index]=temp;
	}
	else
	{
		t=arr[index];
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=temp;
		
	}
	
	
}

bool search(int key)
{
		int index=hashIndex(key);
		
		if(arr[index]==NULL)
		{
			printf("Item not found\n");
			return false;
		}
		else
		{
		t=arr[index];
		while(t!=NULL)
		{
			if(t->key==key)
			{
				printf("Item Found %d \n",t->data);
				return true;
			}
			t=t->next;
		}
		
		}
		printf("Item not found\n");
		return false;
		
		
}

void del(int key)
{
		int index=hashIndex(key);
		if(arr[index]==NULL)
		{
			printf("Element not present");
			return;
		}
		else
		{
			t=arr[index];
			if(t->key==key)
			{
				//arr[index]=NULL;
				arr[index]=t->next;
				return;
			}
			while(t!=NULL)
			{
				if(t->next->key==key)
				{
					t->next=t->next->next;
					return;
				}
				
			}
		}
}

void display()
{
	int i=0;
	for(i=0;i<SIZE;i++)
	{
		if(arr[i]!=NULL)
		{
			t=arr[i];
			while(t!=NULL)
			{
				printf("%d ",t->data);
				t=t->next;
			}
			printf("\n");
		}
		
	}
	printf("\n");
}
