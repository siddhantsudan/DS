def quickSort(arr,low,high):
 if low>=high:
     return 
 pivot=arr[(low+high)//2]
 index=partition(arr,pivot,low,high)
 quickSort(arr,low,index-1)
 quickSort(arr,index,high)
 return arr


def partition(arr,pivot,low,high):
    while low<=high:
        while arr[low]<pivot:
            low+=1
        while arr[high]>pivot:
            high-=1
        if low<=high:
            swap(arr,low,high)
            low+=1
            high-=1
    return low

def swap(arr,low,high):
     temp=arr[low]
     arr[low]=arr[high]
     arr[high]=temp
     return

    
l=[98,20,78,1,44,67,90]
size=len(l)-1
print(quickSort(l,0,size))
