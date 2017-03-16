#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
# define SIZE 101

char *arr[101];
int hash(char x[]);
void add(char *x[],char key[]);
void contains(char *x[],char key[]);

void main()
{
//	printf("%d",'x');
add(arr,"Hello");
//add(arr,"Hello");
//add(arr,"Sid");
add(arr,"Sid");
contains(arr,"Hello");
contains(arr,"Sid");
	getch();
}

int hash(char x[])
{
	return (int)x%101;
	//printf("%d",'x')
}

void add(char *x[],char key[])
{
	int h=hash(key);
	int offset=0;
	while(h<SIZE)
	{
		
	if(x[h]==NULL)
	{
			x[h]=key;
			printf("Key Added at index %d \n",h);
			return;
	}
	else
	{
		offset++;
		h=h+offset;
	}
	
	}
	printf("Hash Table Full\n");

}
void contains(char *x[],char key[])
{
	int h=hash(key);
	int offset=0;
	while(offset<SIZE)
	{
	if(x[h]==key)
	{
		printf("Table contains key\n");
			//x[h]=key;
			return;
	}

	else
	{
		offset++;
		h=h+offset;
	}
	
	}
	printf("Key Not found\n");
}
