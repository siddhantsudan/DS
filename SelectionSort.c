#include<stdio.h>
#include<conio.h>
int * selectionSort(int arr[]);
void main()
{
	int arr[6]={18,10,2,22,48,32};
	int *temp=selectionSort(arr);
		int x=0;
	for(x=0;x<6;x++)
	{
		printf("%d ",*temp);
		temp++;
	}
}

int * selectionSort(int arr[])
{
	int i=0,k=0,temp=0;
	int imin,index;
	for(i=0;i<5;i++)
	{
	//	min=arr[i];
		imin=i;
		for(k=i+1;k<6;k++)
		{
			if(arr[imin]>arr[k])
			{
				//	min=arr[k];
					imin=k;
			}
		
			
		}
	
		temp=arr[i];
		arr[i]=arr[imin];
		arr[imin]=temp;
		
	
		
		
	}
	return arr;
}
