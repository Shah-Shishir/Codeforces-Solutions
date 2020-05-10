function getNonZeroDigits(str) {
	var count = 0
	for (var ch of str)
		if (ch !== "0")
			++count
	return count
}

function getAllRoundNumbers(str) {
	var len = str.length
	for (var i in str)  {
		if (str[i] !== "0") {
			print(((str[i]-'0')*Math.pow(10,len-i-1)), end=" ")
		}
	}
}

var tc = Number(readline())
while(tc--) {
	var str = readline()
	print(getNonZeroDigits(str))
	getAllRoundNumbers(str)
}