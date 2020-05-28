function comp(a,b) { return a-b; }
function solve(n,arr) {
    arr.sort(comp);
    var ans = 1000;
    for (var i=1; i<n; i++)
        ans = Math.min(ans,arr[i]-arr[i-1]);
    return ans;
}
var t = Number(readline());
while (t--) {
    var n = Number(readline());
    var arr = readline().split(' ').map(Number);
    print(solve(n,arr));
}