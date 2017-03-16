
def mergeSort(s):
    size=len(s)
    if size==1:
     return s
    print(size)
    mid=size//2
    #mid=int(mid)
    #print(mid)
    arr1= mergeSort(s[0:mid])
    arr2=mergeSort(s[mid:size])
    return merge(arr1,arr2)
    


def merge(x,y):
    #count1=0
    #count2=0
    z=[]
    while len(x)!=0 and len(y)!=0:
        if x[0]>y[0]:
         z.append(y[0])
         del y[0]
         #count2=count2+1
        else:
         z.append(x[0])
         del x[0]
         #count1=count1+1
    if len(x)!=0:
        for i in x:
            z.append(i)
    if len(y)!=0:
        for i in y:
            z.append(i)
    return z

s=[10,20,30,2,4,5,100]
print(mergeSort(s))

    
