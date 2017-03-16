def maxSum(l):
    total=0
    i=0
    j=-1
    ans=-1000
    for x in l:
        if total<0:
         total=0
         i=l.index(x)
         j=i

        
        
        total=total+x
        if total>ans:
            ans=total
        j=j+1
    return (ans,i,j)

def maxCrossArray(arr,low,high,mid):
    total=0
    mylow=-1000
    lend=0
    rend=0
    for z in range(mid,low-1,-1):
        total=total+arr[z]
        if total>mylow:
            mylow=total
            lend=arr.index(arr[z])
        #if total+x >mylow:
         #total=total+x
         #mylow=total
         #lend=arr.index(x)
        
    total=0
    myhigh=-1000
    for y in arr[mid+1:high+1]:
        total=total+y
        if total>myhigh:
            myhigh=total
            rend=arr.index(y)
        #if total+x >myhigh:
        # total=total+x
         #myhigh=total
        # rend=arr.index(y)
    
    return (lend,rend,mylow+myhigh)    


def maxSubArray(arr,low,high):
       if low==high:
         return (low,high,arr[low])
       
       mid=(low+high)//2
       (lstart,lend,lsum)=maxSubArray(arr,low,mid)
       (rstart,rend,rsum)=maxSubArray(arr,mid+1,high)
       (cstart,cend,csum)=maxCrossArray(arr,low,high,mid)
       print("Sum is {}".format(csum))
       if lsum>=rsum and lsum>=csum:
        return (lstart,lend,lsum)
       elif rsum>=lsum and rsum>=csum:
        return (rstart,rend,rsum)
       else:
        return (cstart,cend,csum)
    
    
l=[-2,-3,4,-1,-2,1,5,-3]
size=len(l)-1
print(maxSubArray(l,0,size))

t=[1,2,3,4,5]
mid=3
high=4
low=0
#for x in range(mid,low-1,-1):
  #print(t[x])
