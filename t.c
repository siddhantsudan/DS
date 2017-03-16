#include<stdio.h>
#include<conio.h>


void main()
{
	int i=1;
	int a[]={18,10,2,22,48,32};
	for(i=1;i<=5;i++)
	{
		int j;
		j=i;
		while(j>0 && a[j-1]>a[j])
		{
			int temp;
			temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
			j--;
		}
		
	}
	for(i=0;i<6;i++)
	{
		printf("%d ",a[i]);
	}
	
	getch();
}
