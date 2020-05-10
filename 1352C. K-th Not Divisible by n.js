function getKthNonDivisibleByN(n,k) {
  var p = n-1
	var mod = k % p
	var d = Math.floor(k/p)
	var ans = d*n+mod
	if (k % p == 0)
		ans = ans-1
	return ans
}

var tc = Number(readline())
while (tc--) {
	var str = readline()
	var arr = str.split(" ")
	var n = arr[0]
	var k = arr[1] 
  print(getKthNonDivisibleByN(n,k))
}