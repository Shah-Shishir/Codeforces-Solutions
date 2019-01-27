import math

n,m = input().split()
n,m = [int(n),int(m)]
arr = [int(x) for x in input().split()]
ans = -1
p = -1
for i in range(n):
    d = math.ceil(arr[i]/m)
    if d >= ans:
        ans = d
        p = i+1
print (p)
