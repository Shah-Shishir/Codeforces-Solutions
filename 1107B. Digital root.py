n = int(input())
for i in range(n):
    k,x = input().split()
    k,x = [int(k),int(x)]
    print(((k-1)*9)+x)