def mergeSort(arr):
 size=len(arr)
 #print(arr,low,high,id(arr))
 if size==1:
     return arr
 #mid=(size)//2
 mid=(size)//2

 #x=mid+1
 #y=high+1
 #print(mid)
 arr1=mergeSort(arr[:mid])
 arr2=mergeSort(arr[mid:])
 return merge(arr1,arr2)

def merge(a,b):
    a1=len(a)
    b1=len(b)
    i=0
    j=0
    l=[]
    while i!=a1 and j!=b1:
        if a[i]>b[j]:
            l.append(b[j])
            j+=1
        else:
            l.append(a[i])
            i+=1
    if i==a1:
        l.extend(b[j:])
    else:
        l.extend(a[i:])
    return l


l=[90,10,7,45,64,95,789,451]

print(mergeSort(l))
#print(merge([100,190,200],[1,3,120]))
