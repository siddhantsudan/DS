#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#include<stdlib.h>

void CreateNode(int n);
void Edge(int start,int end);
void bfs();
void Enque(int data);
bool queueEmpty();
int Dequeue();

struct node
{
	int label;
	char color;
};
struct node *arrlist[5];int i=0;
int edge[5][5];int tracknode=0;
char q[10];int front=-1,rear=-1;
void main()
{
	int y=0,k=0;
	for(y=0;y<5;y++)
	{
		for(k=0;k<5;k++)
		{
			edge[y][k]=0;
		}
	}
	CreateNode(0);
	CreateNode(1);
	CreateNode(2);
	CreateNode(3);
	CreateNode(4);
	Edge(0,1);
	Edge(0,2);
	Edge(0,3);
	Edge(1,4);
	Edge(2,4);
	Edge(3,4);
	
	bfs();
}

void CreateNode(int n)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->label=n;
	temp->color='w';
	arrlist[i++]=temp;
	
}
void Edge(int start,int end)
{
	edge[start][end]=1;
	edge[end][start]=1;
}
void bfs()
{
	struct node *t=arrlist[0];
	t->color='g';
	t->label=0;
	//printf("%d",t->label);
	//printf("EE %d\n",edge[0][1]);
	while(1)
	{
	struct node *start=arrlist[tracknode];
	int y;
	 for(y=0;y<5;y++)
	  {
	  	//	printf("dgsdfS %d\n",edge[0][1]);
		 if(edge[start->label][y]==1 && arrlist[y]->color=='w' )
		 {
		 	printf("Yes\n");
		 	arrlist[start->label]->color='g';
		 		Enque(start->label);
		 }
		
		
	  }
	  start->color='b';
	  printf("%d\n",start->label);
	  tracknode=Dequeue();
	  printf(" track %d",tracknode);
	  if(tracknode==-1)
	  {
	  	printf("All Nodes Traversed");
	  	 break;
	  }
	 
	
    }
	
}
void Enque(int data)
{
	if(queueEmpty())
	{
		front++;
	//	rear++;
	}
	rear++;
	q[rear]=data;
}
bool queueEmpty()
{
	if(front==-1&& rear==-1)
	return true;
	else if(front>rear)
	return true;
	else
	return false;
}
int Dequeue()
{
//	printf("Q %d",q[1]);
	if(queueEmpty())
	return -1;
	
return q[front++];
}
