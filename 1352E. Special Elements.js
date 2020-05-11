function countSpecialElements(len,arr) {
    if (len < 3) {
      print(0)
      return
    }
    var prefixSum = new Array(len)
    var mx = prefixSum[0] = arr[0]
    for (var i=1; i<len; i++) {
      mx = Math.max(mx,arr[i])
      prefixSum[i] = prefixSum[i-1]+arr[i]
    }
    var mark = new Array(mx+1).fill(0)
    for (var n of arr)
      mark[n] = mark[n]+1
    var count = 0
    for (var j=2; j<=len; j++) {
      for (var i=j-1; i<len; i++) {
        var n = 0
        if (i == j-1)
          n = prefixSum[i]
        else
          n = prefixSum[i]-prefixSum[i-j]
        if (n <= mx) {
          if (mark[n] > 0) {
            count += mark[n]
            mark[n] = 0
          }
        }
      }
    }
    print(count)
  }
  
  var tc = Number(readline())
  while (tc--) {
    var n = Number(readline())
    var arr = readline().split(" ").map(function(x) { return +x })
    countSpecialElements(n,arr)
  }