#include<stdio.h>
#include<conio.h>

void main()
{
	int x=6;
	int *p;
    int **q;
    int ***r;
    
    p=&x;
    *p=10;
    printf("%d\n",x);
    printf("Address of x is %x\n",&x);
    q=&p;
    **q=12;
    
       printf("%d %x\n",x,*q);
       
    r=&q;
    ***r=15;
     printf("%d\n",x);
     
     getch();
}
