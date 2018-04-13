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
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define u unsigned int

int main (void)
{
    int i,k,l,m,n,d,c;

    while (cin >> k >> l >> m >> n >> d)
    {
        c = 0;

        if (k == 1 || l == 1 || m == 1 || n == 1)
            c = d;
        else
        {
            for (i=1; i<=d; i++)
                if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
                    c++;
        }

        cout << c << endl;
    }

    return 0;
}
