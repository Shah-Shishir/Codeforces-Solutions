#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc,n,k,i,ans;
    scanf ("%d",&tc);
    while (tc--) {
        set <int> mySet;
        scanf ("%d",&n);
        for (i=1; i<=n; i++) {
            scanf ("%d",&k);
            mySet.insert(k);
        }
        ans = 0;
        set <int> :: reverse_iterator rit;
        for (rit=mySet.rbegin(); rit!=mySet.rend(); rit++) {
            int p = *rit;
            while (p % 2 == 0) {
                ++ans;
                p /= 2;
                mySet.erase(p);
            }
        }
        printf ("%d\n",ans);
    }
    return 0;
}
