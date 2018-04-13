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
#define Y pf ("YES\n")
#define N pf ("NO\n")

bool prime (int n)
{
    if (n == 0 || n == 1)
        return false;

    if (!(n & 1))
    {
        if (n == 2)
            return true;
        else
            return false;
    }

    for (int i=2; i*i<=n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main (void)
{
    int n,m,i,p;

    while (cin >> n >> m)
    {
        for (i=n+1; ; i++)
        {
            if (prime(i))
            {
                p = i;
                break;
            }
        }

        if (p == m)
            Y;
        else
            N;
    }

    return 0;
}
