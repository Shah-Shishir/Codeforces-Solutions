#include <bits/stdc++.h>
using namespace std;

#define     sf      scanf
#define     pf      printf
#define     lld     long long
#define     MAX     200005

lld arr[MAX];

int main () {
    lld n,i,k,sum;

    while (sf ("%lld",&n) != EOF) {
        sum = 0;

        for (i=0; i<n; i++) {
            sf ("%lld",&k);

            if (k > 0) {
                sum += k;
                arr[i] = sum;
            }
            else
                arr[i] = sum+k;;
        }

        for (i=0; i<n; i++)
            pf ("%lld ",arr[i]);

        pf ("\n");
    }

    return 0;
}
