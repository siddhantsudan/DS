#include<stdio.h>
#include<conio.h>

void BinarySearch(int a[],int key,int n);
void main()
{
   int arr[8]={10,24,28,40,89,95,98,100};
	 BinarySearch(arr,1000,sizeof(arr)/sizeof(arr[0]));
	 
	// printf("Size Of %d",sizeof(arr)/sizeof(arr[0]));
	 getch();
}

void BinarySearch(int arr[],int key,int n)
{
//	printf("%d",arr[0]);
//	int n=sizeof(arr)/sizeof(arr[0]);
	printf("Size is %d",n);
	int mid=0,low=0,high=n-1,count=0;
	while(1)
	{
		if(low>high)
		{
			printf("Element Not Found");
			break;
		}
		count++;
		printf("Count %d ",count);
		mid=(low+high)/2;
		if(arr[mid]<key)
		{
			low=mid+1;
		}
		else if(arr[mid]>key)
		{
			high=mid-1;
		}
		else
		{
			printf("\nElement at index %d",mid);
			break;
		}
	}
}
