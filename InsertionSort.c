#include<stdio.h>
#include<conio.h>

int * insertionSort(int arr[]);

void main()
{
	int myarr[6]={18,10,2,22,48,32};
	int *a=insertionSort(myarr);
	int x=0;
	for(x=0;x<6;x++)
	{
		printf("%d ",*a);
		a++;
	}
	getch();
}

int * insertionSort(int arr[])
{
	int j=0,k=0;
	for(j=1;j<6;j++)
	{
		int current=arr[j];
		int hole=j;
		while(hole>0 && arr[hole-1]>current)
		{
			arr[hole]=arr[hole-1];
			hole--;
		}
		arr[hole]=current;
	
	}
	return arr;
}
