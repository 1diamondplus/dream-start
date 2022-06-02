s = input().split()
height = [int(i) for i in s]
b=[i for i in range(100)]
def merge_sort(l,r):
    if l==r:
        return
    mid=(l+r)//2 
    merge_sort(l,mid)
    merge_sort(mid+1,r)
    i=l
    j=mid
    u=l
    j+=1
    while(i<=mid and j<=r):
        if(height[i]<=height[j]):
            b[u]=height[i]
            i+=1
            u+=1
        else:
            b[u]=height[j]
            j+=1
            u+=1
            # ans=ans+mid-i+1

    while i<=mid:
        b[u]=height[i]
        u+=1
        i+=1
    while j<=r:
        b[u]=height[j]
        u+=1
        j+=1
    i=l
    while(i<=r):
        height[i]=b[i]
        i+=1;
merge_sort(0,len(height)-1)
# print(ans)
print(height)