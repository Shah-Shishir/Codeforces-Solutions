n = int(input())
arr = [int(x) for x in input().split()]
if sum(arr) % n == 0:
    print (n)
else:
    print (n-1)
