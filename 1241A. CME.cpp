#include <bits/stdc++.h>
using namespace std;

#define     sf      scanf
#define     pf      printf

int main() {
    int tc,n,ans;

    sf ("%d",&tc);

    while (tc--) {
        sf ("%d",&n);

        if (n & 1)
            ans = 1;
        else if (n == 2)
            ans = n;
        else
            ans = 0;

        pf ("%d\n",ans);
    }

    return 0;
}
