function countErasedZeroes(str) {
    var len = str.length, start = -1, end = -1, count = 0
    for (var i=0; i<len; i++) {
      if (str[i] === '1') {
          start = i
          break
      }
    }
    for (var i=len-1; i>=0; i--) {
      if (str[i] === '1') {
          end = i
          break
      }
    }
    for (i=start; i<=end; i++) {
      if (str[i] === '0')
          ++count
    }
    return count
  }
  
  var tc = Number(readline())
  while (tc--) {
    var str = readline()
    print(countErasedZeroes(str))
  }