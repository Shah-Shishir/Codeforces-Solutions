#include <bits/stdc++.h>
using namespace std;

#define     sf      scanf
#define     pf      printf

char s[105],t[105];

int main() {
    int tc,i,l,k;

    sf ("%d",&tc);

    while (tc--) {
        sf ("%s %s",s,t);

        bool p1[26] = {0};
        bool p2[26] = {0};

        l = strlen(s);

        for (i=0; i<l; i++) {
            k = s[i]-97;
            p1[k] = 1;

            k = t[i]-97;
            p2[k] = 1;
        }

        k = 0;

        for (i=0; i<26; i++) {
            if (p1[i] && p2[i]) {
                k = 1;
                pf ("YES");
                break;
            }
        }

        if (!k) pf ("NO");

        pf ("\n");
    }

    return 0;
}
