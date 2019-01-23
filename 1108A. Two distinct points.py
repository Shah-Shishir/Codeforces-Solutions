q = int(input())
for i in range(q):
    l1,r1,l2,r2 = input().split()
    l1,r1,l2,r2 = [int(l1),int(r1),int(l2),int(r2)]
    if l1 != l2:
        print (l1,l2)
    elif l1 != r2:
        print (l1,r2)
    elif r1 != l2:
        print (r1,l2)
    elif r1 != r2:
        print (r1,r2)