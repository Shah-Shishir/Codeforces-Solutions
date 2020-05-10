def getKthNonDivisibleByN(n,k):
	p = n-1
	mod = k % p
	d = k // p
	ans = d*n+mod
	if k % p == 0:
		ans = ans-1
	return ans

tc = int(input())
for pos in range(tc):
	n,k = input().split(" ")
	n,k = [int(n),int(k)]
	print(getKthNonDivisibleByN(n,k))