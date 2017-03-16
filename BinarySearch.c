#include<stdio.h>
#include<conio.h>
#include<math.h>


int binarysearch(int key,int min,int max,int myarr[]);
int findmid(int mi,int ma);
int count=0;
void main()
{
int arr[8]={10,24,28,40,89,95,98,100};
	//printf("%d",arr[1]);
 int value=binarysearch(100,0,7,arr);
 if(value==-1)
 printf("Item not found");
 else
 printf("Item at position %d",value);
 
 getch();
 	
}



int binarysearch(int key, int min, int max,int myarr[])
{
count++;
printf("%d ",count);

if(min>max)
return -1;


int mid=findmid(min,max);


if(myarr[mid]<key)
binarysearch(key,mid+1,max,myarr);
else if(key<myarr[mid])
binarysearch(key,min,mid-1,myarr);
else
return mid;

}


int findmid(int min , int max)
{
	int size=(max-min)+1;
	int mid;
//	printf("%d ",size/2);
	mid=round(size/2.0);
	//printf("%d ",mid);
//	printf("%d\n",mid);

	mid=mid-1;
//	if((size%2)==0)
//{
//	mid=size/2;
//	mid=mid-1;
//}
//else
//{
//	mid=(size+1)/2;
//	mid=mid-1;
//}

mid=min+mid;
//printf("%d\n",mid);
//	getch();
return mid;

}

