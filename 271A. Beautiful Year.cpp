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
    int n,i,val,d;

    while (cin >> n)
    {
        for (i=n+1; ; i++)
        {
            d = log10(n)+1;
            val = i;

            set <int> myset;

            while (val != 0)
            {
                myset.in(val % 10);
                val /= 10;
            }

            if (d == myset.size())
            {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}
