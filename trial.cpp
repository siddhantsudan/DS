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

main()
{
	insert(10,1000);
	insert(12,2000);
	insert(10,1500);
	search(10);
	search(11);
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
		while(t!=NULL)
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
				printf("Item Found  \n");
				return true;
			}
			t=t->next;
		}
		
		}
		printf("Item not found\n");
		return false;
		
		
}
