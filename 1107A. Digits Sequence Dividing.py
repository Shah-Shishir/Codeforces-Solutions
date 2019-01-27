q = int(input())
for i in range (q):
    l = int(input())
    s = input()
    if l >= 3:
        print ("YES\n2\n%c " %s[0],end="")
        for i in range (1,l):
            print (s[i],end="")
        print ()
    else:
        if s[0] == s[1] or s[0] > s[1]:
            print ("NO")
        else:
            print ("YES\n2\n%c %c" %(s[0],s[1]))