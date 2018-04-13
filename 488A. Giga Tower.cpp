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
    int n,x,i,t,rem;
    bool k;

    while (cin >> n)
    {
        for (i=n+1; ; i++)
        {
            t = i;
            k = false;

            while (t != 0)
            {
                rem = t % 10;
                t /= 10;

                if (labs(rem) == 8)
                {
                    k = true;
                    break;
                }
            }

            if (k == true)
            {
                cout << i-n << endl;
                break;
            }
        }
    }

    return 0;
}
