def getNonZeroDigits(str):
	count = 0
	for ch in str:
		if ch != "0":
			count = count+1
	return count

def getAllRoundNumbers(str):
	l = len(str)
	for i in range (0,l):
		if str[i] != "0":
			print(int(str[i])*pow(10,l-i-1),end=' ')
	print()
	return

tc = int(input())
for pos in range(tc):
	str = input()
	print(getNonZeroDigits(str))
	getAllRoundNumbers(str)