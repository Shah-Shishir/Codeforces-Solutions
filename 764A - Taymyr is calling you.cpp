/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf

int main (void)
{
    int m,n,z,i,j,count;

    while (cin >> m >> n >> z)
    {
        count = 0;

        for (i=m; i<=z; i+=m)
            for (j=n; j<=i; j+=n)
                if (i == j)
                    count = count + 1;

        cout << count << endl;
    }

    return 0;
}
