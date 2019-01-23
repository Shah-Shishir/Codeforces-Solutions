import math

n = int(input())
arr = [int(x) for x in input().split()]
l = len(arr)
arr.sort()
P = arr[l-1]
divOfP = []
r = int(math.sqrt(P))+1
for i in range(1,r):
    if P % i == 0:
        if i*i == P:
            divOfP.append(i)
        else:
            divOfP.append(i)
            divOfP.append(P//i)
for x in divOfP:
    arr.remove(x)
l = len(arr)
if l == 0:
    P = Q
else:
    arr.sort()
    Q = arr[l-1]
print (P,Q)
divOfP.clear()
arr.clear()