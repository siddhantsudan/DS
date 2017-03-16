#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

void main()
{
	int i=1;
	int a[]={18,10,2,22,48,32};
	int count=0,index=0,temp=0,min=0;
bool swapped=true;
while(swapped)
{
	for(i=0;i<=4;i++)
	{
		swapped=false;
		if(a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			swapped=true;
		}
	}
}
		for(i=0;i<6;i++)
	{
		printf("%d ",a[i]);
	}
	
	getch();
}
