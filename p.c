#include<stdio.h>
#include<conio.h>


void main()
{
	int i=1;
	int a[]={18,10,2,22,48,32};
	int count=0,index=0,temp=0,min=0;
	while(count!=5)
	{
		min=a[count];
		index=count;
		for(i=count+1;i<=5;i++)
		{
			if(min>a[i])
			{
				min=a[i];
				index=i;
			}
		}
		
		temp=a[count];
		a[count]=min;
		a[index]=temp;
		count++;
	}
		for(i=0;i<6;i++)
	{
		printf("%d ",a[i]);
	}
	
	getch();
}
