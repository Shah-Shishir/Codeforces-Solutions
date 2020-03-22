#include <bits/stdc++.h>
using namespace std;

#define     sf      scanf
#define     pf      printf

int main () {
    int tc,n,i;

    sf ("%d",&tc);

    while (tc--) {
        sf ("%d",&n);

        if (n == 1)
            pf ("-1");
        else
        {
            for (i=1; i<n; i++)
                pf ("9");

            pf ("4");
        }

        pf ("\n");
    }

    return 0;
}
