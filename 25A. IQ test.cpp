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
    int arr[105],n,i,o,e;

    while (cin >> n)
    {
        o = e = 0;

        for (i=0; i<n; i++)
        {
            cin >> arr[i];

            if (arr[i] & 1)
                o++;
            else
                e++;
        }

        if (o == 1)
        {
            for (i=0; i<n; i++)
            {
                if (arr[i] & 1)
                {
                    cout << ++i << endl;
                    break;
                }
            }
        }
        else
        {
            for (i=0; i<n; i++)
            {
                if (!(arr[i] & 1))
                {
                    cout << ++i << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
